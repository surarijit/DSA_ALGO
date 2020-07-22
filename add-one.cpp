//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define all(a) a.begin(),a.end()
#define n1 b.size()
#define pb push_back
using namespace std;
typedef long long ll;

void display(vector<int>a)
{
    for(auto it = a.begin();it!=a.end();it++) cout<<*it<<" ";
    cout<<endl;
}
vector<int> solution(vector<int> &a)
{
    vector<int> b(all(a));
    reverse(all(b));
    int i, carry = 1;
    for(i=0;i<n1 && carry;i++)
    {
        b[i] += carry;
        carry = b[i]/10;
        b[i] = b[i]%10;
    }
    if(carry) b.pb(carry);
    else while(!b[n1-1]) b.pop_back();
    reverse(all(b));
    return b;

}
int main()
{
    vector<int> a = {9,9};
    display(a);
    display(solution(a));
    a = {1,2,3};
    display(a);
    display(solution(a));
    return 0;
}
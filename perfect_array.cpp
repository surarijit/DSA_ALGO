//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
using namespace std;
typedef long long ll;
void display(vector<int> a)
{
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}
bool solution(vector<int> &a)
{
    int n= a.size(),i;
    vector<int> left(n,0);int right = a[n-1];
    for(i=0;i<n;i++) if(i) left[i] = max(left[i-1],a[i]);
    else left[i] = a[i];
    for(i=n-2;i>0;i--){
        right = min(right,a[i]);
        if(left[i]==right)
        return 1;
    }
    return 0;
}
int main()
{
    vector<int> a = {9488, 25784, 5652, 9861, 31311, 8611, 1671, 7129, 28183, 2743, 11059, 4473, 7927, 21287, 2259, 7214, 32529 };
    display(a);
    cout<<solution(a)<<endl;
    return 0;
}
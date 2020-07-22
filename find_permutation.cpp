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
    for (int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}
vector<int> soln(const string s, int n)
{
    vector<int> a(n);
    int i,l=1,r=0;
    a[0] = 1;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='I') a[i+1] = ++l;
        else a[i+1] = r--;
    }
    display(a);
    for(i=0;i<n;i++) a[i]+= abs(r);
    return a;
}
int main()
{
    string s = "IIIII";
    display(soln(s,s.size()+1));
    return 0;
}
//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
using namespace std;
typedef long long ll;
int soln(string s)
{
    unordered_map<char,int> ma;
    ma['I']=1; ma['V'] = 5; ma['X']=10; ma['L'] = 50; ma['C'] = 100; ma['D']= 500; ma['M']=1000;
    int n=0,i;
    for(i=0;i<s.size();i++)
    {
        if(ma[s[i]]>=ma[s[i+1]]) n+= ma[s[i]];
        else n+= ma[s[i+1]]- ma[s[i]],i+=1;
    }
    return n;
}
int main()
{
    string s = "XIV";
    cout<<soln(s)<<endl;
    return 0;
}
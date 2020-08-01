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
string solve(string s, int b)
{
    if(b==1) return s;
    vector<char> ans[b];
    int j=0,i; string s1=""; bool flag;
    for(i=0;i<s.size();i++){
        ans[j].push_back(s[i]);
       // cout<<j<<" ";
        if(j==0) flag =0;
        else if(j==b-1) flag =1;
        if(flag) j-=1;
        else j+=1;
        
    }
    for(i=0;i<b;i++){
        for(j=0;j<ans[i].size();j++) s1 += ans[i][j];
    }
    return s1;
}
int main()
{
    string s = "PAYPALISHIRING";
    cout<<s<<endl;
    cout<<solve(s,3)<<endl;
    return 0;
}
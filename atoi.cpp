//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define reverse(a) reverse(all(a))
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
using namespace std;
typedef long long ll;
int soln(const string s)
{
    int i=0; string s1 ="";
    if(s[0]=='+'||s[0]=='-') i+=1;
    while(i<s.size() && s[i]>='0' && s[i]<='9') s1+=s[i++];
    int x=0,y=1;
    for(i=s1.size()-1;i>=0;i--)
    {
        x += y*(s1[i]-'0');
        if(x>=INT_MAX){
            if(s[0]=='-') return INT_MIN;
            else return INT_MAX
        }
        y *= 10;
        cout<<x<<endl;
    }
    if(s[0]=='-') return -x;
    return x;
}
int main()
{
    cout<<INT_MAX<<" "<<INT_MIN<<endl;
    string s = "123 32";
    /*cout<<soln(s)<<endl;
    s = "-88297 248252140B12 37239U4622733246I218 9 1303 44 A83793H3G2 1674443R591 4368 7 97";
    cout<<soln(s)<<endl;*/
    s = "5121478262 8070067M75 X199R 547 8C0A11 93I630 4P4071 029W4";
    cout<<soln(s)<<endl;
    return 0;
}
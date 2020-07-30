//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=a.size()-1;i>=0;i--)cout<<a[i]; cout<<endl;}
using namespace std;
typedef long long ll;
string soln(string a, string b)
{
    if(b.size()>a.size()) swap(a,b);
    int i=a.size()-1,n,carry=0,j=b.size()-1;
    string s = "";
    while(i>=0 && j>=0)
    {
        n = (a[i]-'0')+ (b[j]-'0') + carry;
        if(n==2) n=0,carry=1;
        else
        if(n==3) n=1,carry=1;
        else carry = 0;
        s = (char)(n+'0')+s;
        i--;j--;
    }
    while(i>=0)
    {
        n = (a[i]-'0') + carry;
       if(n==2) n=0,carry=1;
       else
        if(n==3) n=1,carry=1;
        else carry = 0;
        s = (char)(n+'0') + s;
        i--;
    }
    if(carry) s = '1' +s;
    return s;
}
int main()
{
    string a = "100", b = "11";
    ///cout<<soln(a,b)<<endl;
    a = "1010110111001101101000"; b = "1000011011000000111100110";
    string s = soln(a,b);
    display(a); display(b); display(s);cout<<endl;
    a = "1110000000010110111010100100111";  b = "101001";
    s = soln(a,b);
    display(a); display(b); display(s);
    return 0;
}
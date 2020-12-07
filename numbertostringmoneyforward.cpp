#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define pii pair<int,int>
#define pll pair<ll,ll>
#define INF 1e9
#define INFL 1e18
#define mod 1000000007
//#define mod 998244353
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
using namespace __gnu_pbds; 
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> os;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> os_pair;

ll power(ll x,ll n){ll res =1;while(n>0){if(n%2==1){res=res*x;}x=x*x;n=n/2;}return res;}
ll powm(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
const string one[] = {"", "one ", "two ", "three ", "four ",
                      "five ", "six ", "seven ", "eight ",
                      "nine ", "ten ", "eleven ", "twelve ",
                      "thirteen ", "fourteen ", "fifteen ",
                      "sixteen ", "seventeen ", "eighteen ",
                      "nineteen "};

const string ten[] = {"", "", "twenty ", "thirty ", "forty ",
                      "fifty ", "sixty ", "seventy ", "eighty ",
                      "ninety "};
string convert(int num, string suffix)
    {
        if (!num)
            return "";
        string res;
        // cout << num << " " << suffix << endl;
        if (num > 99)
        {

            res = one[num / 100] + "hundred ";
        }

        num %= 100;

        if (num > 19)
        {
            res += ten[num / 10] + one[num % 10];
        }
        else
        {
            res += one[num];
        }

        return res + suffix;
    }

int main(){
	string s;
	cin>>s;
	int x=0,i,j;
	if(s=="0")
	{
		cout<<"Zero";
		return 0;
	}
	if(s.length()==0)
	{
		cout<<-1;
		return 0;
	}
	for(i=0;i<s.length();i++)
	{
		if((s[i]>='0'&&s[i]<='9')||s[i]=='.')
		{
			if(s[i]=='.')
			x++;
			
			continue;
		}
		else
		{
			cout<<-1;
			return 0;
		}
	}
	if(s[0]=='0'&&s[1]=='.')
	{
		cout<<"Zero point ";
		for(i=2;i<s.length();i++)
		{
			int x=s[i]-'0';
			if(x==0)
		    cout<<"zero ";
			else
			cout<<one[x];
		}
		return 0;
	}
	if(s[0]=='0'||x>1)
	{
		cout<<-1;
		return 0;
	}
	string res;
	ll num=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='.')
		break;
		int x=s[i]-'0';
		num=num*10;
		num=num+x;
		
		
	}
	res += convert((num / 1000000000), "billion ");

        // cout<<(num/1000000)%1000<<endl;
        res += convert((num / 1000000) % 1000, "million ");

        // cout<<(num/1000)%1000<<endl;
        res += convert((num / 1000) % 1000, "thousand ");
        res += convert((num) % 1000, "");
    if(x!=0)
    {
    	for(i=0;i<s.length();i++)
    	{
    		if(s[i]=='.')
    		{
    			break;
			}
		}
		i++;
		string p="point ";
		string z="zero ";
		res=res+p;
		while(i<s.length())
		{
			int x=s[i]-'0';
			if(x==0)
		    res+=z;
			else
			res+=one[x];
			i++;
		}
	}
	res[0]=res[0]-32;
	cout<<res;

}
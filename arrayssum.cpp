#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int ll
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define sort(a) sort(all(a))
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define mod (ll)1e9+7
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define repf(i,a,b) for(i=a;i<b;i++)
#define repb(i,a,b) for(i=a;i>=b;i--)
#define N 100005
ll power(ll x, ll y)  
{  
    ll res = 1; x %= mod; if (!x) return 0; 
    while (y > 0)  
    {  
        if (y & 1)  res = (res*x) % mod;  
        y = y>>1;x = (x*x) % mod;  
    }  
    return res;  
} 
int main()
{
	FAST
    int t=1;
    cin>>t;
    while(t--)
    {
		int i,n,k;
		cin>>n>>k;
		vi a(n);
		int cnt=1;
		repf(i,0,n) 
		{
			cin>>a[i];
			if(i && a[i]!=a[i-1]) cnt++;
		}
		if(k==1)
		{
			if(cnt > 1) cout<<-1;
			else 
			{
				// repf(i,0,n) cout<<a[i]<<" ";
				cout<<1;
			}
		}
		else
		{
			vi b(n);
			int j=k;int ans=0;
			while(1)
			{
				// ans++;
				// b[0]=0;
				repf(i,0,n)
				{
					if(j)
					{
						// j--;
						b[i]=a[i];
						a[i]=0;
						if(i==0 || b[i]!=b[i-1]) j--;
						// else if(b[i]!=b[i-1]) j--;
					}
					else
					{
						b[i]=b[i-1];
						a[i]-=b[i];
					}
				}
				j=k;ans++;
				if(a[n-1]==0) break;
			}
			cout<<ans;
		}
		cout<<endl;
    }
    return 0;
}
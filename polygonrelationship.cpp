/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<ll,ll>
#define sort(a) sort(all(a))
#define pll pi
#define ff first
#define ss second
#define reverse(a) reverse(all(a))
#define rerf(i,x,b) for(i=x;i<b;i++)
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
    ll n;
        cin>>n;
        set<pll>s;
        ll i;
        rerf(i,0,n) 
        {
            pll p;
            cin>>p.ff>>p.ss;
            s.insert(p);
        }
        n=s.size();
        ll ans=n;
        while(n>5)
        {
            n= n>>1;
            ans+=n;
        }
        printf("%lld\n",ans );
        return;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
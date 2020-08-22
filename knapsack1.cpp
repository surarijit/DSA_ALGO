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
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
ll dp[200][SIZE];
ll knap(ll value[], int w[], int W, int i){
    if(W==0) return 0;
    if(i==-1) return 0;
    if(dp[i][W]!=-1) return dp[i][W];
    if(w[i] > W) return dp[i][W] = knap(value,w,W,i-1);
    return dp[i][W] = max(knap(value,w,W-w[i],i-1)+value[i], knap(value,w,W,i-1));

}
void solve(){
	int n,W;
    cin>>n>>W;
    ll value[n]; int w[n];
    for(int i=0;i<n;i++) cin>>w[i]>>value[i];
    printf("%lld\n",knap(value,w,W,n-1));
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
    	solve();
    }
    return 0;
}   
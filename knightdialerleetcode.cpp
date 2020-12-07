/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define va(x) ((x)%mod)
#define vi vector<int>
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ull unsigned ll
using namespace std;
#define ll long long int
#define edge(x,y) adj[x].pb(y),adj[y].pb(x);
#define mod (ll)(1e9+7)
#define SIZE 5050
v adj[10];
ll dp[SIZE][20];
void pre(){
	edge(0,4); edge(0,6);
	edge(1,6); edge(1,8); 
	edge(2,7); edge(2,9);
	edge(3,8); edge(3,4);
	edge(4,9); 
	edge(6,7);	memset(dp,-1,sizeof(dp));
}
ll work(int i, int n){
	if(n==0) return 1;
	if(dp[n][i]!=-1) return dp[n][i]%mod;
	ll ans=0;
	for(int v:adj[i]) ans = (ans%mod+ work(v,n-1)%mod)%mod;
	return dp[n][i] = ans;
}
 int knightDialer(int n) {
        pre(); 
        ll ans=0;
        rep(i,0,10)  ans= (ans%mod+ work(i,n-1)%mod)%mod;
        return (int)ans;
    }
void solve(){
	int n;cin>>n;
	cout<<knightDialer(n);
}
int32_t main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
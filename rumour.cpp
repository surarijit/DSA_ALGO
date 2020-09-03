
// Problem : C. Rumor
// Contest : Codeforces - Educational Codeforces Round 33 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/893/C
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define me(u,v) {adj[u].pb(v); adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n,m;
	cin>>n>>m;
	vector<ll> c(n); input(c);
	vector<ll> adj[n+1];
	while(m--){
		ll u,v;
		cin>>u>>v; adj[u].pb(v); adj[v].pb(u);
	}
	queue<ll> q; vector<bool> visited(n+1,0);
	ll mincost = INF,cost=0;
	for(ll i=1;i<=n;i++){
		if(!visited[i]) {
			q.push(i);mincost=c[i-1];
			while(!q.empty()){
				ll u = q.front(); q.pop();
				visited[u] = 1;
				mincost = min(mincost,c[u-1]);
				for(ll j=0;j<adj[u].size();j++){
					ll v =adj[u][j];
					if(!visited[v]) {
						visited[v] =1; 
						q.push(v);
					}
				}
			}
			cost+=mincost;
		}
	}
	cout<<cost<<endl;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}

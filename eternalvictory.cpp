
// Problem : D. Eternal Victory
// Contest : Codeforces - Codeforces Beta Round #57 (Div. 2)
// URL : https://codeforces.com/problemset/problem/61/D
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
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
#define front top
#define me(a,b,c) adj[a].pb({c,b})
ll longest(ll &n, vector<pi> adj[]){
	pqq<pi,vector<pi>,greater<pi> > q;
	vi visited(n+1,0);
	q.push({0,1});
	int path =0;
	while(!q.empty()){
		int w = q.front().F, u = q.front().S; q.pop();
		if(visited[u]) continue;
		visited[u]=1;
		path = w;
		for(pi x:adj[u]){
			if(visited[x.S]) continue;
			q.push({x.F+w,x.S});
		}
	}
	return path;
}
void solve(){
	ll n,sum=0,w;cin>>n;
	vector<pi> adj[n+1];
	for(ll i=1;i<n;i++){
		ll u,v; cin>>u>>v>>w; me(u,v,w), me(v,u,w);
		sum+= 2*w;
	}
	cout<<sum-longest(n,adj);
}
int main()
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
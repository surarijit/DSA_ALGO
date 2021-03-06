
// Problem : C. Dijkstra?
// Contest : Codeforces - Codeforces Alpha Round #20 (Codeforces format)
// URL : https://codeforces.com/problemset/problem/20/C
// Memory Limit : 64 MB
// Time Limit : 1000 ms
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
#define pi pair<int,int>
#define me(x,y,w) adj[x].pb({w,y});
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;

void solve(){
	int n,m; cin>>n>>m; vector<pi> adj[n+1]; vi visited(n+1,0),parent(n+1),dist(n+1,INF); 
	for(int i=1;i<=n;i++) parent[i]=i;
	while(m--){
		int u,v,w; cin>>u>>v>>w;
		me(u,v,w); me(v,u,w);
	}
	vi ans;
	pqq <vi, vector<vi>, greater<vi>> q;
	q.push({0,1,1});
	while(!q.empty()){
		vi a = q.top(); q.pop();
		int u = a[1]; 
		if(visited[u]) continue;
		visited[u]=1;
		parent[u] = a[2];
		if(u==n) break;
		for(int i=0;i<adj[u].size();i++){
			pi y = adj[u][i]; int v = y.second;
			if(!visited[v]) q.push({a[0]+y.first,v,u});	
		}
	}
	int i=n;
	while(parent[i]!=i){
		ans.pb(i);
		i = parent[i];
	}
	if(ans.empty()){
		cout<<-1; return;
	}
	ans.pb(1); reverse(ans); display(ans);
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
// Problem : B. Mr. Kitayuta's Colorful Graph
// Contest : Codeforces - Codeforces Round #286 (Div. 2)
// URL : https://codeforces.com/problemset/problem/505/B
// Memory Limit : 256 MB
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
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int cnt = 0;
vector<pi> adj[SIZE];
void dfs(int u, vi &visited, int color, int y){
	if(visited[u]) return;
	visited[u] = 1;
	if(u==y){
		cnt+=1; return;
	}	
	for(int i=0;i<adj[u].size();i++){
		int v = adj[u][i].first, c = adj[u][i].second;
		if((color==0 ||c==color) && !visited[v]){
			dfs(v,visited,c,y); visited[v] = 0;
		}
	}
	//visited[u] = 0;
}
void solve(){
	int n,m; cin>>n>>m;
	while(m--){
		int u,v,c; cin>>u>>v>>c;
		adj[u].pb({v,c}); adj[v].pb({u,c});
	}
	int test; cin>>test; queue<pi> q;
	while(test--){
		int x,y;cnt=0; cin>>x>>y;  
		vi visited(n+1,0);
		dfs(x,visited,0,y);	
		cout<<cnt<<endl; continue;
	}
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
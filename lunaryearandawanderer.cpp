
// Problem : D. Lunar New Year and a Wander
// Contest : Codeforces - Codeforces Round #536 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1106/D
// Memory Limit : 256 MB
// Time Limit : 3000 ms
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
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void dfs(int u, vi adj[], bool visited[]){
	sort(adj[u]); cout<<u<<" ";
	for(int i=0;i<adj[u].size();i++){
		if(!visited[adj[u][i]]){
			visited[adj[u][i]]=1;
			dfs(adj[u][i], adj,visited);
		}
	}
}
void solve(){
	int n,m; cin>>n>>m; vi adj[n+1],ans;
	while(m--){
		int u,v;
		cin>>u>>v; adj[u].pb(v); adj[v].pb(u);
	}
	
	bool visited[n+1] = {0}; 
	//dfs(1,adj,visited);return;
	pqq <int,vi,greater<int>> q; q.push(1);
	while(!q.empty()){
		int u = q.top(); q.pop();
		if(visited[u]) continue;
		visited[u] = 1; cout<<u<<" ";
		for(int i=0;i<adj[u].size();i++){
			q.push(adj[u][i]);
		}
	}
	
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
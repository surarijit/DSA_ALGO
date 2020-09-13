
// Problem : C. Kefa and Park
// Contest : Codeforces - Codeforces Round #321 (Div. 2)
// URL : https://codeforces.com/problemset/problem/580/C
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
int dfs(int u, vi adj[], vi &cats, int m1, int &m, vi &visited){
	if(visited[u]) return 0;
	visited[u] = 1;
	if(cats[u]) m1-=1;
	else m1=m+1;
	if(m1==0) return 0;
	if(adj[u].empty() || (adj[u].size()==1 && visited[adj[u][0]])) return 1;
	int cnt =0;
	for(int i=0;i<adj[u].size();i++){
		if(!visited[adj[u][i]])
		{cnt += dfs(adj[u][i],adj,cats,m1,m,visited); visited[adj[u][i]] = 0;}
	}
	return cnt;
	
}
void solve(){
	int n,m; cin>>n>>m; vi cats(n),visited(n,0); input(cats); vi adj[n];
	for(int i=0;i<n-1;i++) {
		int u,v; cin>>u>>v; u-=1; v-=1; 
		if(v<u) swap(u,v);
		adj[u].pb(v); adj[v].pb(u);
	}
	cout<<dfs(0,adj,cats,m+1,m,visited)<<endl;
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

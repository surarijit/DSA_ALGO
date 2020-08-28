/*
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
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
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
vector<pi> adj[SIZE];
int mst(int n,int src=1){
	vector<bool> visited(n+1,0);
	priority_queue< pi, vector<pi> , greater<pi>> pq;
	pq.push({0,src}); int sum =0;
	while(!pq.empty()){
		pi x = pq.top(); pq.pop();
		int u = x.second;
		if(visited[u]) continue;
		visited[u] = 1;
		sum += x.first;
		for(int i=0;i<adj[u].size();i++){
			int y = adj[u][i].first;
			if(visited[y]==0){
				pq.push({adj[u][i].second,y});
			}
		}
	}
	return sum;
}
void solve(){
	int n,m;
	cin>>n>>m;
	vector<pi> adj[n+1];
	while(m--){
		int u,w,v;
		cin>>u>>v>>w;
		adj[u].pb({v,w});
		adj[v].pb({u,w});
	}
	cout<<mst(n)<<endl;
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
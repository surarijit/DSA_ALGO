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
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define addEdge(adj,i,j) {adj[i].pb(j);}
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void dfs(vector<int> adj[], int V, bool visited[]){
    visited[V] = 1;
    for(int i=0;i<adj[V].size();i++){
        if(!visited[adj[V][i]]) dfs(adj,adj[V][i],visited);
    }
}
void solve(vector<int> adj[], int V){
    bool visited[V];int tree = 0;
    memset(visited,0,sizeof(visited));
    for(int i=0;i<V;i++){
        if(!visited[i]){
            dfs(adj,i,visited);
            tree+=1;
        }
    }
    cout<<tree<<endl;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
        int V = 5; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 3, 4); 
    	solve(adj,V);
    }
    return 0;
}
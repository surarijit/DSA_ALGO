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
#define pi pair<int,int>
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
void dijk(vector<pi> adj[], int n){
    set<pi> s; 
    vector<int> dist(n+1,INF);
    s.insert({0,1});
    dist[1] = 0;
    while(!s.empty()){
        pi x = *(s.begin());
        s.erase(s.begin());
        int u = x.second;
        for(int i=0;i<adj[u].size();i++){
            pi y = adj[u][i];
            int v = y.first;
            int d = y.second;
            if(dist[u] + d < dist[v]) {
                if(dist[v]!=INF)
                s.erase(s.find({dist[v],v}));
                dist[v] = dist[u] + d;
                s.insert({dist[v],v});  
            }
        }
    }
    /*printf("Vertex   Distance from Source\n"); 
    for (int i = 01; i <=n; ++i) 
        printf("%d \t\t %d\n", i, dist[i]); */
    if(dist[n]== INF) dist[n] = -1;
    cout<<dist[n]<<endl;
}
void solve(){
	int vertex,edges,u,v,w;
    cin>>vertex>>edges;
    vector<pi> adj[vertex+1];
    for(int i=0;i<edges;i++) {
        cin>>u>>v;
        //u+= 1; v+=1;
        adj[u].pb({v,0});
        adj[v].pb({u,1});
    }
    dijk(adj,vertex);
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
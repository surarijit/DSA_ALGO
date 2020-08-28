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
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define displaypair(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1].first<<" "; cout<<endl;}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int mst(vector<pi> adj[], int src,int dst, int n){
     vector<int> dist(v+1,INF); 
    set<pi> s;
    dist[src] = 0;
    s.insert({0,src});
    while(!s.empty()){
        pi x = *s.begin();
        s.erase(s.begin());
        int u = x.second;
        for(int i=0;i<adj[u].size();i++){
            pi y = adj[u][i];
            int weight = y.second;
            int v = y.first;
            if(dist[v] >  weight){
                if(dist[v]!=INF)
                    s.erase(s.find({dist[v],v}));
                dist[v] = weight;
                s.insert({dist[v],v});
            }
        }
    }
    int sum =0;
    //display(dist);
    for(int i=1;i<=v;i++) sum+= dist[i];
    //printf("%d\n",sum);
    return sum;
}
void solve(){
    int n,m,q=1;
    cin>>n>>m;
    vector<pi> adj[n+1];
    map<string,int> ma;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        ma[s] = i+1;
    }
    while(m--){
        int w;
        string u,v;
        cin>>u>>v>>w;
        adj[ma[u]].pb({ma[v],w});
        adj[ma[v]].pb({ma[u],w});
    }
    for(int i=1;i<=n;i++) displaypair(adj[i]); cout<<mst(adj,1,n,n)<<endl;
    return;
    cin>>q;
    while(q--){
        string src,dest;
        cin>>src>>dest;
        cout<<mst(adj,ma[src],ma[dest],n)<<endl;
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
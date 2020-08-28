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
#define pi pair<ll,ll>
#define ff q.front()
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(ll i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(ll i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n,m,clib,croad,libcount=0,road=0;
    cin>>n>>m>>clib>>croad;
    std::vector<ll> adj[n+1];
    vector<bool> visited(n+1,0);
    while(m--){
        ll u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(clib<=croad) {
        cout<<clib*n<<endl;
        return;
    }
    queue<ll> q;
    for(ll j=1;j<=n;j++){
        if(!visited[j]){
            libcount+=1;
            q.push(j); visited[j] =1;
        while(!q.empty()){
            for(ll i=0;i<adj[ff].size();i++) {
                if(!visited[adj[ff][i]]) visited[adj[ff][i]] = 1,q.push(adj[ff][i]),road+=1;
            }
            q.pop();
        }
    }
    }
    cout<<libcount*clib+ road*croad<<endl;
}
int main()
{
    IOS
    ll t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
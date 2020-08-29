/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
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
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
    int n,m,test;
    cin>>n>>m>>test;
    vector<pi> adj[n+1];
    while(m--){
        int u,w,v;
        cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }
    while(test--){
        int x,y,w;
        cin>>x>>y>>w;
        bool flag = 0;
        queue<pi> q; 
        vector<bool> visited(n+1,0);
        visited[x]=1;
        for(int i=0;i<adj[x].size();i++){
            pi a = adj[x][i];
            if(a.second <= w && !visited[a.first]) q.push(a);
        }
        while(!q.empty()){
            pi a= q.front(); q.pop();
            if(a.first == y){
                flag = 1; break;
            }
            visited[a.first] = 1;
            for(int j=0;j<adj[a.first].size();j++){
                pi b = adj[a.first][j];
                if(b.second <= w && !visited[b.first]) q.push(b);
            }
        }
        if(flag) cout<<"1\n";
        else cout<<"0\n";
    }
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
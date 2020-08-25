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
#define ff q.front()
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
    int n,m,u,v,cnt=0;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    queue<int> q;q.push(1);
    bool visited[n+1]; memset(visited,0,sizeof(visited));
    while(!q.empty()){
        int c = q.size();
        while(c--){
        visited[ff] = 1;
        if(ff == n)  {
            printf("%d\n",cnt);
            return;
        }
        for(int i=0;i<adj[ff].size();i++){
            if(!visited[adj[ff][i]]) q.push(adj[ff][i]);
        }
        q.pop();
        }
        cnt+=1;
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
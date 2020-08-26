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
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define ff q.front().first
#define fs q.front().second
int dp[SIZE];
int dfs(int i, vector<int> adj[]){
    if(dp[i]==-1){
        for(int j=0;j<adj[i].size();j++) 
            dp[i] = max(dp[i],1+dfs(adj[i][j],adj));
    }
    return dp[i];
}
void solve(){
	int n,u,v,m;
    cin>>n>>m;  int maxdist = 0;
    vector<int> adj[n+1];
    while(m--){
        cin>>u>>v;
        adj[u].pb(v);
    }
    for(int i=1;i<=n;i++){
        maxdist = max(maxdist,dfs(i,adj));
    }
    printf("%d\n", 1+maxdist);
    return;
    bool visited[n+1] = {false};
    queue<pi> q;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            q.push({i,1});
            while(!q.empty()){
                visited[ff] = 1;
                maxdist = max(maxdist,fs);
                for(int i=0;i<adj[ff].size();i++)
                    q.push({adj[ff][i],fs+1});
                q.pop();
            }
        }
    }
    printf("%d\n", maxdist-1);
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
    	solve();
    }
    return 0;
}
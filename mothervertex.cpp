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
#define va(x) ((x)%mod)
#define vi vector<int>
#define INF 0x3f3f3f3f
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

int work(int u, vector<int> g[], vector<int> &visited, vector<int> &dp){
    visited[u]=1;
	int ans =0;
	if(dp[u]!=-1) return dp[u];
    for(int v:g[u]){
        if(visited[v]==0){
            visited[v] = 1;
            ans += (dp[v]==-1?work(v,g,visited,dp):dp[v]);
        }
    }
    return dp[u]= ans+1;
}
int findMother(int V, vector<int> g[]) 
{ 
    // Your code here
    vector<int> dp(V,-1);	
    for(int i=0;i<V;i++){
    	if(dp[i]!=-1)continue;
        vector<int> visited(V,0);
        if(work(i,g,visited,dp)==V) return i;
    }
    display(dp);
    return -1;
    
} 	
void solve(){
	int n,m;cin>>n>>m;
	vi adj[n+1]; 
	while(m--){
		int u,v;cin>>u>>v;
		adj[u].pb(v);
	}
	cout<<findMother(n,adj)<<endl;
	
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
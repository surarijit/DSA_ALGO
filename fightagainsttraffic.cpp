
// Problem : D. Fight Against Traffic
// Contest : Codeforces - Educational Codeforces Round 40 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/954/D
// Memory Limit : 256 MB
// Time Limit : 1000 ms
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
#define va(x) ((x)%mod)
#define vi vector<ll>
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
#define check(a,x) ((find(all(a),x)==a.end())?1:0)
void help(vi adj[], vi &a, int x){
	queue<int> q;q.push(x);  int steps=0;
	while(!q.empty()){
		int c = q.size();
		while(c--){
			int u = q.front(); q.pop();
			if(a[u]!=-1)continue;
			a[u] = steps;
			for(int v:adj[u]){
				if(a[v]==-1) q.push(v);
			}
		}
		steps+=1;
	}
	//display(a);
}
void solve(){
	int n,m,s,ans=0,t;cin>>n>>m>>s>>t;
	vi adj[n+1]; bool edge[n+1][n+1]; memset(edge,0,sizeof(edge));
	while(m--){int u,v;cin>>u>>v; adj[u].pb(v), adj[v].pb(u); edge[u][v] = edge[v][u]=1;}
	vi ds(n+1,-1), dt(all(ds));
	help(adj,ds,s); help(adj,dt,t);
	int d = ds[t];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(!edge[i][j] and (ds[i]+dt[j]+1>=d and ds[j]+dt[i]+1>=d)) 
			ans+=1;
		}
	}
	cout<<ans;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
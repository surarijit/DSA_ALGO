
// Problem : A. Linova and Kingdom
// Contest : Codeforces - Codeforces Round #635 (Div. 1)
// URL : https://codeforces.com/problemset/problem/1336/A
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
#define vi vector<int>
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
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
void solve(){
	int n,k;cin>>n>>k;
	vi adj[n+1],dist(n,-1);
	for(int i=1;i<n;i++){ int u,v;cin>>u>>v; adj[u].pb(v), adj[v].pb(u);}
	queue<int> q; q.push(1); int steps = 0,ans=steps;
	while(!q.empty()){
		int c = q.size();
		while(c--){
			int u = q.front(); q.pop();
			dist[u-1] = steps;
			for(int v:adj[u]){
				if(dist[v-1]==-1) q.push(v);
			}
		}
		steps+=1;
	}
	
	sort(dist); reverse(dist);
	
	for(int i=0;i<k;i++) ans+= dist[i];
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
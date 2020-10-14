
// Problem : C. The Tag Game
// Contest : Codeforces - Educational Codeforces Round 22
// URL : https://codeforces.com/problemset/problem/813/C
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
void help(int u, int l, vi adj[],int x, vi &a){
	a[u] = l;
	for(int v:adj[u]){
		if(v!=x) help(v,l+1,adj,u,a);
	}
}
void solve(){
	int n,k;
	cin>>n>>k; vi  adj[n+1];
	for(int i=0;i<n;i++) {int u,v;cin>>u>>v; adj[u].pb(v); adj[v].pb(u);}
	vi a(n+1,0), b=a;
	help(1,0,adj,-1,a);
	help(k,0,adj,-1,b);
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]>b[i]) ans = max(ans,a[i]);
	}
	cout<<ans*2;
	
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
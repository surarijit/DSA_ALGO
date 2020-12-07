
// Problem : C. Ilya And The Tree
// Contest : Codeforces - Codeforces Round #430 (Div. 2)
// URL : https://codeforces.com/problemset/problem/842/C
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
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
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
#define input(a) {rep(i1,01,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define ull unsigned ll
using namespace std;

vi a,ans, adj[SIZE], cnt(SIZE,0);
void dfs(int v,int pre, vi &arr, int g){
	if(v==pre) return;
	int u = a[v];
	ans[v-1] = g;
	
	for(int i=1;i*i<=u;i++){
		if(u%i==0) {
			cnt[i] +=1; 
			if(i*i != u)cnt[u/i] +=1;
			if(cnt[i] >= arr.size()) ans[v-1] = max(ans[v-1],i);
			if(cnt[u/i] >= arr.size()) ans[v-1] = max(ans[v-1], u/i);
		}
		
	}
	g = __gcd(u,g);
	arr.pb(u);
	
	for(int x:adj[v]){
		if(x!=pre) dfs(x,v,arr,g);
	}
	
	
	for(int i=1;i*i<=u;i++){
		if(u%i==0){
			cnt[i] -=1;
			if(i*i != u) cnt[u/i] -=1;
		}
	}
	arr.pop_back();
}

void solve(){
	int n;cin>>n;
	a.clear(); a.resize(1+n,0);
	ans.clear(); ans.resize(n,1);
	input(a);
	int m=n-1;
	while(m--){
		int u,v;cin>>u>>v;
		adj[u].pb(v),adj[v].pb(u);
	}
	vi visited(1+n,0), arr;
	dfs(1,-1,arr,0);
	display(ans);
}
int32_t main()
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
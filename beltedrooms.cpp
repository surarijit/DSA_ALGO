
// Problem : B. Belted Rooms
// Contest : Codeforces - Codeforces Raif Round 1 (Div. 1 + Div. 2)
// URL : https://codeforces.com/contest/1428/problem/B
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
#define ll long long 
#define ull unsigned ll
using namespace std;
#define int ll
#define find(a,x) (find(all(a),x)!=a.end())
bool dfs(int u, int x,int &a,vi adj[]){
	if(u==a) return 1;
	for(int v:adj[u]){
		if(v!=x and dfs(v,u,a,adj)) return 1;
	}
	return 0;
}
void solve(){
	int n,ans=0;;cin>>n;
	vi adj[n];
	string s; cin>>s;
	for(int i=0;i<n;i++){
		int u = i, v = i+1==n?0:i+1;
		if(s[i]=='-'){ adj[u].pb(v); adj[v].pb(u);}
		else if(s[i]=='>') {adj[u].pb((i+1)%n);}
		else adj[(i+1)%n].pb(i);
	}
	for(int i=0;i<n;i++){
		bool flag = 1;
		for(int v:adj[i]) {
			if(find(adj[v],i)) {flag = 0,ans+=1; break;}
		}
		if(flag){
			for(int v:adj[i])if(dfs(v,-1,i,adj)) {cout<<n<<endl; return;}
		}
	}
	cout<<ans<<endl;
}
int32_t main()
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

// Problem : Path-etic Sums
// Contest : CodeChef - October Cook-Off 2020 Division 2
// URL : https://www.codechef.com/COOK123B/problems/PATHSUMS
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
#define display(a) {for(int i1=01;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void solve(){
	int n, step=0;cin>>n;
	vi adj[n+1],a(n+1,0);
	for(int i=1;i<n;i++) {
		int u,v;cin>>u>>v;
		adj[u].pb(v); adj[v].pb(u);
	}
	queue<int> q;q.push(1);
	while(!q.empty()){
		int c = q.size();
		while(c--){
			int u= q.front(); q.pop();
			if(a[u]) continue;
			a[u] = step+1;
			for(int v:adj[u]) if(a[v]==0)q.push(v);
		}
		step =1-step;
	}
	display(a);
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
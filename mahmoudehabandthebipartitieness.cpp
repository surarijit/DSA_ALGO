
// Problem : B. Mahmoud and Ehab and the bipartiteness
// Contest : Codeforces - Codeforces Round #435 (Div. 2)
// URL : https://codeforces.com/problemset/problem/862/B
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
#define vi vector<ll>
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
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
ll	 solve(){
	ll n,red=0,blue=0; cin>>n; vi adj[n+1], color(n+1,-1);
	for(ll i=1;i<n;i++){
		ll u,v;cin>>u>>v; adj[u].pb(v); adj[v].pb(u);
	}
	queue<ll> q;
	q.push(1); color[1] = 0;
	while(!q.empty()){
		ll u = q.front(); q.pop();
		for(ll v:adj[u]){
			if(color[v]==-1){
				color[v]=1-color[u];
				q.push(v); continue;
			}
			 if(color[v]==color[u])return 0;
		}
	}
	for(ll i=1;i<=n;i++){
		if(color[i]==1) red+=1;
		else if(color[i]==0)blue += 1;
	}
	return red*blue-(n-1);
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<solve();
    }
    return 0;
}

// Problem : A Bug’s Life
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/BUGLIFE/
// Memory Limit : 1536 MB
// Time Limit : 5000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<queue>
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
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
bool solve(){
 	ll n,m;cin>>n>>m;
 	vi adj[n+1],color(n+1,-1);;
 	while(m--){
 		ll u,v; cin>>u>>v;
 		adj[u].pb(v); adj[v].pb(u);
 	}
 	queue<ll> q; 
 	for(ll i=1;i<=n;i++){
 		if(color[i]==-1){
 			q.push(i); color[i]=0;
 			while(!q.empty()){
 				int u=q.front(); q.pop();
 				for(int v:adj[u]){
 					if(color[v]==-1) color[v] = 1-color[u], q.push(v);
 					else if(color[v]==color[u]) return 0;
 				}
 			}
 		}
 	}
 	return 1;
 	
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;int cnt=1;
    while(t--){
    	cout<<"Scenario #"<<cnt++<<":\n";
    	if(solve())cout<<"No suspicious bugs found!";
    	else cout<<"Suspicious bugs found!";
    	cout<<endl;
    }
    return 0;
}
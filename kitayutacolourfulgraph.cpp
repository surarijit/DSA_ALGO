
// Problem : B. Mr. Kitayuta's Colorful Graph
// Contest : Codeforces - Codeforces Round #286 (Div. 2)
// URL : https://codeforces.com/problemset/problem/505/B
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
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n,m; cin>>n>>m;
	vector<pi> adj[n+1];
	while(m--){
		int u,v,c; cin>>u>>v>>c;
		adj[u].pb({v,c}); adj[v].pb({u,c});
	}
	int test; cin>>test; queue<int> q;set<int> s;
	while(test--){
		int x,y; cin>>x>>y; vi visited(n+1,0);
		q.push(x); q.push(y);
		while(!q.empty()){
			int u= q.front(); q.pop();
			visited[u] = 1;
			vector<pi> a = adj[u];
			for(int i=0;i<a.size();i++) {
				if(!visited[a[i].first]){
					s.insert(a[i].second); visited[a[i].first] = 1;
					q.push(a[i].first);
				}
			}
		}
		cout<<s.size()<<endl; s.clear();
	}
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
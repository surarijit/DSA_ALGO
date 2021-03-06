
// Problem : Minimizing Path Cost
// Contest : HackerEarth - Algorithms - Graphs - Shortest Path Algorithms
// URL : https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/practice-problems/algorithm/minimizing-path-cost/description/
// Memory Limit : 256 MB
// Time Limit : 5000 ms
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
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
#define edge(a,b,c) adj[ma[a]].pb({c,ma[b]});
using namespace std;
vector<pi>adj[SIZE];map<string,int> ma;
int work(int start,int end){
	pqq<pi,vector<pi>,greater<pi>> q;
	vi visited(SIZE,0);
	q.push({0,start});
	while(!q.empty()){
		int u = q.top().second, w = q.top().first; q.pop();
		if(visited[u]) continue;
		visited[u] = 1;
		if(u==end) return w;
		for(pi i:adj[u]){
			int v = i.second;
			q.push({i.first+w,v});
		}
	}
	return -1;
}
void solve(){
	int n,m,w;cin>>n>>m; string s,u,v;
	for(int i=1;i<=n;i++) {
		cin>>s;ma[s]=i;
	}
	while(m--){
		cin>>u>>v>>w;
		edge(u,v,w); edge(v,u,w);
	}
	int test;cin>>test;
	while(test--){
		cin>>u>>v;
		cout<<work(ma[u],ma[v])<<endl;
	}
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
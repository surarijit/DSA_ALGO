
// Problem : Chocolate Journey
// Contest : HackerEarth - Algorithms - Graphs - Shortest Path Algorithms
// URL : https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/practice-problems/algorithm/successful-marathon-0691ec04/description/
// Memory Limit : 512 MB
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
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define sc(x) scanf("%d",&x)
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define front top
void solve(){
	int n,m,k,a,b,x,cost = INF; sc(n); sc(m); sc(k); sc(x);
	vector<bool> ischoco(n+1,0); vector<int> chocodista(n+1,INF),chocodistb(n+1,INF);
	vector<pi> adj[n+1]; bool visited[n+1];
	memset(visited,0,sizeof(visited));
	while(k--){
		int g; sc(g);
		ischoco[g] =1;
	}
	while(m--){
		int u,v,d; sc(u); sc(v); sc(d);
		adj[u].pb({d,v}); adj[v].pb({d,u});
	}
	sc(a); sc(b);
	queue<pi> pq; priority_queue<pi,vector<pi>,greater<pi>> q;
	q.push({0,a});
	while(!q.empty()){
		pi u = q.front(); q.pop();
		if(ischoco[u.second]) 
			chocodista[u.second] = min(chocodista[u.second], u.first);
		if(visited[u.second]) continue;
		visited[u.second] = 1;
		for(int i=0;i<adj[u.second].size();i++){
			pi v =  adj[u.second][i];
			if(!visited[v.second])
			q.push({v.first+u.first,v.second});
			
		}
	}
	q.push({0,b}); 
	memset(visited,0,sizeof(visited));
	while(!q.empty()){
		pi u = q.front(); q.pop();
		if(u.first>x) break;
		if(ischoco[u.second]) 
			chocodistb[u.second] = min(chocodistb[u.second], u.first);
		if(visited[u.second]) continue;
		visited[u.second] = 1;
		for(int i=0;i<adj[u.second].size();i++){
			pi v =  adj[u.second][i];
			if(!visited[v.second])
			q.push({v.first+u.first,v.second});

		}
	}
	for(int i=1;i<=n;i++){
		if(ischoco[i] && chocodista[i]!=INF && chocodistb[i] <= x) 
			cost = min(cost,chocodista[i] + chocodistb[i]) ;
	}
	if(cost==INF) cost = -1;
	printf("%d\n",cost);
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
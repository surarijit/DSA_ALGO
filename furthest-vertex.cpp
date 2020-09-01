
// Problem : Furthest vertex
// Contest : HackerEarth - Algorithms - Graphs - Shortest Path Algorithms
// URL : https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/practice-problems/algorithm/furthest-vertex/
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
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define sc(a) scanf("%d",&a);
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ff q.front()
typedef long long ll;
void solve(){
	int n,q;
	sc(n); sc(q);
	vector<int> adj[n+1];
	while(q--){
		int f; sc(f);
		if(f==1){
			int u,v; sc(u); sc(v);
			adj[u].pb(v); adj[v].pb(u);
			
		}
		else{
			int a; sc(a);
			queue<int> q;vector<bool> visited(n+1,0);
			q.push(a);int level =0;
			while(!q.empty()){
				int c =q.size(); level+=1;
				while(c--){
					visited[ff] =1;
					for(int i=0;i<adj[ff].size();i++) 
					{
						if(!visited[adj[ff][i]]) q.push(adj[ff][i]);
						visited[adj[ff][i]] =1;
					}
					q.pop();
				}
			}
			printf("%d\n",level-1);
		}
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
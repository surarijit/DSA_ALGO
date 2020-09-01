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
#define sc(a) scanf("%d",&a);
#define me(u,v,w) {adj[u].pb({w,v}); adj[v].pb({w,u});}
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int mincostrequired(int n, vector<vector<int>> &g){
	  vector<pi> adj[n+1];int cost = 0;
    for(int i=0;i<g.size();i++){
        me(g[i][0],g[i][1],g[i][2]);
    }
    priority_queue<pi,vector<pi> ,greater<pi>> q;
    q.push({0,1}); bool visited[n+1] = {0};
    while(!q.empty()){
        pi u = q.top(); q.pop();
        if(visited[u.second]) continue;
        visited[u.second] =1;
        cost += u.first;
        //cout<<u.first<<" "<<cost<<endl;
        for(int i=0;i<adj[u.second].size();i++){
            pi v= adj[u.second][i];
            if(!visited[v.second]) 
            q.push(v);
        }
    }
    return cost;
	
}
void solve(){
	int n = 4; 
	vector<vector<int>> B = {{1,2,1},{2,3,4},{1,4,3},{4,3,2},{1,3,10}};
	printf("%d\n",mincostrequired(n,B));
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
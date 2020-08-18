/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void dfs(int n, vector<int> adj[], bool visited[], stack<int> &s){
    if(visited[n]) return;
    else{
        visited[n] = 1;
        for(int i=0;i<adj[n].size();i++){
            if(!visited[adj[n][i]])
            dfs(adj[n][i],adj,visited,s);
        }
    }
    s.push(n);
}
vector<int> toposort(vector<int> adj[], int A){
    bool visited[A];
    memset(visited,0,sizeof(visited));
    stack<int> s;
    for(int i=0;i<A;i++){
        if(!visited[i]){
            dfs(i,adj,visited,s);
        }
    }
    std::vector<int> v;
    while(!s.empty()){
        v.pb(s.top());
        s.pop();
    }
    return v;
}
void solve(){
	int u,v,n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++) {
        cin>>u>>v;
        adj[u].pb(v);
    }
    display(toposort(adj,n));
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
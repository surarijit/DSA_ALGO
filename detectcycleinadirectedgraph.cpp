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
map<int,bool> ma;
bool detect_cycle(vector<int> adj[], int n,bool visited[]){
    if(ma[n]) return 1;
    ma[n] = 1;  
    if(!visited[n]){
        visited[n] = 1;
    for(int i=0;i<adj[n].size();i++){
        if(detect_cycle(adj,adj[n][i],visited)) return 1;
    }
}
    ma[n] = 0;
    return 0;
}
bool solve(int A, vector<int> adj[]){
	ma.clear();
    bool visited[A];
    memset(visited,0,sizeof(visited));
   for(int i=0;i<A;i++){
    if(!visited[i]){
        if(detect_cycle(adj,i,visited)) return 1;
    }
   }
   return 0;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> adj[n];
        int u,v;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            adj[u].pb(v);
        }
    	cout<<(solve(n,adj)?"YES":"NO")<<endl;
    }
    return 0;
}
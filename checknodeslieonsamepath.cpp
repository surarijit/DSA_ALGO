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
bool query(std::vector<int> adj[],int x,int y){
    if(x==y) return 1;
	for(int i=0;i<adj[x].size();i++){
        if(query(adj,adj[x][i],y)) return 1;
    }
    return 0;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
        int n = 9;
        vector<int> graph[n+1];
        graph[1].push_back(2); 
    graph[1].push_back(3); 
    graph[3].push_back(6); 
    graph[2].push_back(4); 
    graph[2].push_back(5); 
    graph[5].push_back(7); 
    graph[5].push_back(8); 
    graph[5].push_back(9); 
    	query(graph,1, 5)? cout << "Yes\n" : cout << "No\n"; 
    query(graph,2, 9)? cout << "Yes\n" : cout << "No\n"; 
    query(graph,2, 6)? cout << "Yes\n" : cout << "No\n"; 
    }
    return 0;
}
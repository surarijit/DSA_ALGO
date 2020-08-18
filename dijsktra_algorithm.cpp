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
int mindistance(vector<int> dist, vector<bool> indist){
    int min_distance=INT_MAX,min_distancevertex=-1;
    for(int i=0;i<dist.size();i++){
        if(indist[i]==0 && dist[i]<=min_distance){
            min_distance = dist[i];
            min_distancevertex = i;
        }
    }
    return min_distancevertex;
}
vector <int> dijkstra(vector<vector<int>> g, int src, int V){
    vector<int> dist(V,INT_MAX);
    vector<bool> indist(V,0);
    dist[src]= 0; 
    for(int i=0;i<V;i++){
        int vertex = mindistance(dist,indist);
        if(vertex==-1) return dist;
        indist[vertex] = 1;
        for(int i=0;i<dist.size();i++){
            if(!indist[i] && g[vertex][i] && dist[vertex]+g[vertex][i] < dist[i]) dist[i] = dist[vertex]+g[vertex][i];
        }
    }
    return dist;

}
void solve(){
	int v;
    cin>>v;
    vector<vector<int>> g(v,vector<int> (v));
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++) cin>>g[i][j];
    }
    int src;
    cin>>src;
    display(dijkstra(g,src,v));
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
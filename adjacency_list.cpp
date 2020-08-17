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
void solve(){
	int v,x,y,e;
	cin>>v>>e;
	vector<int> adj[v];
	for(int i=0;i<e;i++){
	    cin>>x>>y;
	    adj[x].pb(y);
	    adj[y].pb(x);
	}
	for(int i=0;i<v;i++){
	    if(adj[i].size())cout<<i<<"->";
	    for(int j=0;j<adj[i].size();j++){
	        cout<<adj[i][j];
	        if(j!=adj[i].size()-1) cout<<"->";
	    }
	    cout<<endl;
	}
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
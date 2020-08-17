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
void work(vector<int> &v, vector<int> g[], int N){
    v.pb(N);
    for(int i=0;i<g[N].size();i++){
        work(v,g,g[N][i]);
    }
}
vector<int> dfs(vector<int> g[],int N){
    vector<int> v;
    work(v,g,N);
    return v;
}
void solve(){
	int N,E;
    cin>>N>>E;
    vector<int> g[N];
    int u,v;
    for(int i=0;i<E;i++){
        cin>>u>>v;
        g[u].pb(v);
    }
    display(dfs(g,0));
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    cout<<endl;
    return 0;
}
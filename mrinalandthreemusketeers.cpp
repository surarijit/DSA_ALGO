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
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v); adj[v].pb(u);
    }
    int minans = INF;
    for(int i=1;i<=n;i++){
        for(int j= i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                map<int,bool> ma;
                int ans = 0;
                for(int h=0;h<adj[i].size();h++) ma[adj[i][h]]=1;
                if(ma[j] && ma[k]) {
                    ma.erase(j); ma.erase(k);
                    ans += ma.size(); ma.clear();
                }
                else continue;
                for(int h=0;h<adj[j].size();h++) ma[adj[j][h]]=1;
                if(ma[k] && ma[i]){
                   ma.erase(k); ma.erase(i);
                   ans += ma.size(); ma.clear();
                }
                else continue;
                for(int h=0;h<adj[k].size();h++) ma[adj[k][h]]= 1;
                if(ma[i] && ma[j]) {
                    ma.erase(i); ma.erase(j);
                    ans += ma.size(); ma.clear();
                    minans = min(minans,ans);
                }
            }
        }
    }
    if(minans == INF) minans = -1;
    cout<<minans<<endl;
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
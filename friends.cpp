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
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define vi vector<int>
typedef long long ll;

void dfs(int x, int &cnt, vi g[], vector<bool> &vis)
{
    vis[x]=true;
    cnt++;
    int neigh=g[x].size();
    for(int i=0;i<neigh;i++)
    {
        if(!vis[g[x][i]])
        dfs(g[x][i],cnt,g,vis);
    }
}
void solve(){
    int n,m;
        cin>>n>>m;
        
        vector<int> g[n+1];
        vector<bool>vis(n+1);       
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            g[x].pb(y);g[y].pb(x);
        }
        
        int ma=-1;
        for(int u=1;u<=n;u++)
        {
            if(!vis[u])
            {
                int count=0;
                dfs(u,count,g,vis);
                ma=max(count,ma);
            }
        }
        cout<<ma;
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
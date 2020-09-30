/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<(a).size();i1++) cout<<(a)[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
 #define edge(a,b) adj[a].pb(b),adj[b].pb(a);
int bfs(int i, vi adj[],int &n){
        queue<int> q;int step=0;
        q.push(i); vi visited(n,0);
        while(!q.empty()){
        	int c=q.size();
        	while(c--){
        		int ff = q.front();q.pop();
        		visited[ff]=1;
        		for(int x:adj[ff]){
        			if(visited[x]==0)
        			q.push(x),visited[x]=1;;
        		}
        	}
        	step+=1;
        }
        return step;
}
vector<int> findMinHeightTrees(int n, vector<vi>& edges) {
        vi adj[n+1],mht(n,n),v;int m=n;;
        for(auto x:edges){
            edge(x[0],x[1]); 
        }
        for(int i=0;i<n;i++)
        {
            mht[i] = bfs(i,adj,n);
            m = min(m,mht[i]);
            
        }
        for(int i=0;i<n;i++){
            if(mht[i]==m) v.pb(i);
        }
	//	display(mht);
        return v;
}
void solve(){
	int n,m;cin>>n>>m;
	vector<vi> a(m, vi(2));
	for(int i=0;i<m;i++) input(a[i]);
	vi ans = findMinHeightTrees(n,a);
	display(ans);
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
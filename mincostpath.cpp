/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e3)
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define pq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int gh = a.size();for(int i1=0;i1<gh;i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
bool visited[SIZE][SIZE];
#define check(i,j) ((i>=0 && j>=0 &&i<n && j<m &&!visited[i][j])?1:0)
int work(vector<string> &s){
	int n = s.size(),m = s[0].size(),mincost = INF;
	memset(visited,0,sizeof(visited));
	pq<vector<int>,vector<vector<int>>, greater<vector<int>>> q;
	q.push({0,0,0});
	while(!q.empty()){
		vector<int> a = q.top(); q.pop();
		int i = a[1],j=a[2];
		if(visited[i][j]) continue;
		visited[i][j] =1;
		if(a[0] > mincost) break;
		if(i==n-1 && j==m-1) {
			mincost = min(mincost,a[0]);
			continue;
		}
		int left=1,right=1,down=1,up=1;	
		if(s[i][j]=='U') up=0;
		if(s[i][j]=='D') down=0;
		if(s[i][j]=='R') right=0;
		if(s[i][j]=='L') left = 0;
		if(check(i-1,j)) q.push({a[0]+up,i-1,j});
		if(check(i+1,j)) q.push({a[0]+down,i+1,j});
		if(check(i,j+1)) q.push({a[0]+right,i,j+1});
		if(check(i,j-1)) q.push({a[0]+left,i,j-1});
	}
	if(mincost==INF) mincost = -1;
	return mincost;
}
void solve(){
	int a,b; cin>>a>>b;
	vector<string> c(a); input(c);
	printf("%d\n",work(c));
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

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
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
#define INF 0x3f3f3f3f
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
#define N  grid.size()
#define M grid[0].size()
#define check(i,j) ((i>=0 and j>=0 and i<N and j<M)?1:0)

int work(int x, int y, int k, vector<vi> &grid){
	k -= grid[x][y];
	if(k<0) return N*M;
	if(x==N-1 and y==M-1)return 0;
	int g = grid[x][y],ans=N*M;
	grid[x][y]=-1;
	rep(i,-1,2){
		rep(j,-1,2){
			if(abs(i)!=abs(j) and check(i+x,j+y) and grid[i+x][j+y]!=-1){
				ans = min(ans,work(i+x,j+y,k,grid));
			}
		}
	}
	grid[x][y] = g;
	return ans+1;
}
int shortestPath(vector<vector<int>>& grid, int k) {
	queue<vi> q;
	int vis[N][M], step=0;
	rep(i,0,N)rep(j,0,M) vis[i][j]=INT_MAX;
	q.push({0,0,0});
	while(!q.empty()){
		int c = q.size();
		while(c--){
			vi a = q.front();q.pop();
			int x = a[0],y = a[1],obj = a[2];
			if(x==N-1 and y==M-1) return step;

			rep(i,-1,2){
				rep(j,-1,2){
					if(abs(i)!=abs(j) and check(x+i,y+j))
					{
						int o = obj+grid[x+i][y+j];
						
						if(o > k or o>=vis[x+i][y+j]) continue;
						vis[i+x][j+y] = o;
						q.push({x+i,j+y,o});
						}
				}
			}
		}
		step+=1;
	}
	return -1;
}
void solve(){
	int n,m;cin>>n>>m;
	vector<vi> a(n, vi (m,0));
	rep(i,0,n) input(a[i]);
	int k;cin>>k;
	cout<<shortestPath(a,k);
}
int32_t main()
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
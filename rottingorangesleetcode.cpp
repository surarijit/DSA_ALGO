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
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
using namespace std;
#define check(i,j) (i>=0 and j>=0 and i<n and j<m and  grid[i][j]==1)
#define ff q.front().first
#define fs q.front().second
int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())return 0;
        queue<pi> q;
        int step=0,n=grid.size(),m=grid[0].size();
        rep(i,0,n){
            rep(j,0,m){
                if(grid[i][j]==2) q.push({i,j});
            }
        }
       while(!q.empty()){
       	int c = q.size();
       	while(c--){
       		rep(i,-1,2){
       			rep(j,-1,2){
       				if(abs(i)!=abs(j) and check(i+ff,j+fs)){
       					grid[i+ff][j+fs]=2;
       					q.push({i+ff,j+fs});
       				}
       			}
       		}
       		q.pop();
       	}
       	if(!q.empty())
       	step+=1;
       }
      	rep(i,0,n)
      	rep(j,0,m) if(grid[i][j]==1)return -1;
       return step;
    }
void solve(){
	int n,m;cin>>n>>m;
	vector<vi> a(n, vi (m,0));
	rep(i,0,n) {input(a[i]);}
	cout<<orangesRotting(a);
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
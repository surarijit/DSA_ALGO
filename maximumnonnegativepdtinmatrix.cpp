/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
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
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ull unsigned ll
using namespace std;


#define ll long long int
#define SIZE 20
#define mod (ll)(1e9+7)
#define pi pair<ll,ll>
#define n grid.size()
#define m grid[0].size()
pi dp[SIZE][SIZE]; bool visited[SIZE][SIZE] = {{0}};
pi work(int i,int j, vector<vector<int>> &grid){
        if(i==n-1 && j==m-1) return {grid[i][j],grid[i][j]};
        if(visited[i][j]) return dp[i][j];
        visited[i][j] = 1;
		if(i==n-1){
			pi x = work(i,j+1,grid);
			return dp[i][j] = {x.first * grid[i][j], x.second * grid[i][j]};
		}
		if(j==m-1){
			pi x = work(i+1,j,grid);
		return dp[i][j] = {x.first * grid[i][j], x.second * grid[i][j]};
		}
		pi x = work(i,j+1,grid), y = work(i+1,j,grid);
		ll small = min(x.first*grid[i][j], (x.second*grid[i][j]));
		small = min(min(small,y.first*grid[i][j]), y.second*grid[i][j]);
		ll big =  max(x.first*grid[i][j], (x.second*grid[i][j]));
		big = max(max(big,y.first*grid[i][j]), y.second*grid[i][j]);
		if(big<small) swap(big,small);
		return dp[i][j]={big,small};

}
int maxProductPath(vector<vector<int>>& grid) {
		memset(dp,-1,sizeof(dp)); memset(visited,0,sizeof(visited));
        pi x =  work(0,0,grid);
        ll big = x.first, small = x.second;
        if(big<small) swap(big,small);
        return big<0 ? -1:big%mod;
    }
void solve(){
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
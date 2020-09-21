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
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
//start to end covering every obstacle atleast once

#define vi vector<int>
#define n grid.size()
#define m grid[0].size()
#define check(i,j) ((i>=0 &&j>=0 &&i<n && j<m)?1:0)
int ans=0;
bool allcheck(vector<vi> grid){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j]==-1 || grid[i][j]==2) continue;
			else return 0;
		}
	}
	return 1;
}
void work(vector<vi> &grid, int x,int y){
	if(!check(x,y) || grid[x][y]==-1) return;
	if(grid[x][y]==2) {
		if(allcheck(grid))ans+=1; 
	return;
	}
	grid[x][y] = -1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(abs(i)!=abs(j)  && check(x+i,y+j))
			{
				int z = grid[x+i][y+j];
				work(grid,x+i,y+j);
				grid[x+i][y+j] = z;
				}
		}
	}
}
int uniquePathsIII(vector<vector<int>>& grid) {
        for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
        		if(grid[i][j]==1) {
        			work(grid,i,j); return ans;
        		}
        	}
        }
	return 0;
    }
void solve(){
	int x,y;cin>>x>>y; vector<vi> a(x,vi (y)); 
	for(int i=0;i<x;i++) input(a[i]);
	cout<<uniquePathsIII(a)<<endl;
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
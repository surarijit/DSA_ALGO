/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
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
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define SIZE 1000
#define check(i,j) ((i>=0 && j>=0 && i<n && j<m && !visited[i][j] && a[i][j])?1:0)
bool visited[SIZE][SIZE];
void dfs(int i, int j, vector<vector<int>> &a, int &cnt){
	visited[i][j] = 1;
	if(a[i][j]){
		cnt+=1; a[i][j]=0;
		for(int x=-1;x<=1;x++){
			for(int y=-1;y<=1;y++){
				if(check(x+i,y+j)) dfs(i+x,y+j,a,cnt);
			}
		}
	}
}
int region(vector<vector<int>> &a){
	memeset(visited,0,sizeof(visited));
	int large = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] && !visited[i][j]) {
				int cnt =0;
				dfs(i,j,a,cnt);
				large = max(large,cnt);
			}
		}
	}
	return large;
}
void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>
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

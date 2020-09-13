// Problem : C. Fire Again
// Contest : Codeforces - Codeforces Beta Round #35 (Div. 2)
// URL : https://codeforces.com/problemset/problem/35/C
// Memory Limit : 64 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
#define check(i,j) ((i && j && i<=n && j<=m && !visited[i][j])?1:0)
using namespace std;
void solve(){
	int n,m,k; cin>>n>>m>>k; pi ans={1,1};
	bool visited[n+1][m+1] = {{0}};
	queue<pi> q;
	while(k--){
		int u,v; cin>>u>>v; q.push({u,v}); visited[u][v] = 1;
	}
	while(!q.empty()){
		int c =q.size();
		while(c--){
			pi u = q.front(); q.pop();  ans = u;
			for(int i=-1;i<=1;i++){
				for(int j=-1;j<=1;j++){
					if(abs(i)!=abs(j) && check(u.first+i,u.second+j)){
						q.push({u.first+i,u.second+j});
						visited[u.first+i][u.second+j]=1;
					}
				}
			}
		}
	}
	cout<<ans.first<<" "<<ans.second;
}
int main()
{
    IOS
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}

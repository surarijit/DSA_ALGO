
// Problem : C. Andryusha and Colored Balloons
// Contest : Codeforces - Технокубок 2017 - Финал (только для онсайт-финалистов)
// URL : https://codeforces.com/problemset/problem/780/C
// Memory Limit : 256 MB
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
#define SIZE 100008
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
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=01;i1<n11;i1++) cout<<a[i1]%total+1<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void check(vi adj[], int i){
	for()
}
void dfs(int i, vi adj[], int k,  vi &color, int &total){
	if(color[i]!=-1) return;
	color[i] = k;
	for(int j=0;j<adj[i].size();j++){
		if(color[adj[i][j]]==-1){
			k = (k+1)%total;
			dfs(adj[i][j], adj, k, color,total);
		}
	}
}
void solve(){
 	int n,m,maxsize=0,total; cin>>n; m = n-1;
	vi adj[n+1], visited(n+1,0),color(n+1,-1);
 	while(m--){
 		int x,y;cin>>x>>y; 
 		adj[x].pb(y); adj[y].pb(x);
 		maxsize = max(maxsize,max(adj[x].size(),adj[y].size()));
 	}
	total = maxsize +1; cout<<total<<endl;
	dfs(1,adj,0,color,total); display(color);
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
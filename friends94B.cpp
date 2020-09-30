
// Problem : B. Friends
// Contest : Codeforces - Codeforces Beta Round #76 (Div. 2 Only)
// URL : https://codeforces.com/problemset/problem/94/B
// Memory Limit : 256 MB
// Time Limit : 1000 ms
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
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
bool solve(){
	int m,cnt1=0,cnt2=0, adj[6][6] = {{0}};cin>>m;
	while(m--){
		int u,v;cin>>u>>v;
		adj[u][v] = adj[v][u] = 1;
	}
	for(int i=1;i<=5;i++){
		for(int j=i+1;j<=5;j++){
			for(int k=j+1;k<=5;k++){
				if(adj[i][j] && adj[j][k] && adj[k][i]) return 1;
				if(!adj[i][j] && !adj[j][k] && !adj[k][i]) return 1;
			}
		}
	}
	return (cnt1==3 || cnt2==3) ;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<(solve()?"WIN":"FAIL");
    }
    return 0;
}
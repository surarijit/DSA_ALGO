
// Problem : A. Party
// Contest : Codeforces - Codeforces Beta Round #87 (Div. 1 Only)
// URL : https://codeforces.com/problemset/problem/115/A
// Memory Limit : 256 MB
// Time Limit : 3000 ms
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
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define ff q.front()
void solve(){
	int n;
	cin>>n;
	vector<int> adj[n+1]; 
	for(int i=1;i<=n;i++) {
		int x; cin>>x;
		if(x==-1)continue;
		adj[x].pb(i);
		//adj[i].pb(x);
	}
	int ans = 0; queue<int>q;
	for(int i=1;i<=n;i++){
		if(1){
			q.push(i); int level =0;
			while(!q.empty()){
				int c = q.size(); level +=1 ;
				while(c--){
					
					for(int j=0;j<adj[ff].size();j++) {
						if(1) {q.push(adj[ff][j]);
						}
					}
					q.pop();
				}
			}
			ans = max(ans,level);
		}
	}
	printf("%d\n",ans);
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
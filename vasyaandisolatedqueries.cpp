
// Problem : B. Vasya and Isolated Vertices
// Contest : Codeforces - Educational Codeforces Round 52 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/1065/B
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
void solve(){
	ll n,m;
	cin>>n>>m;
	if(m==0 ||n==0) {
		cout<<n<<" "<<n<<endl;return;
	}
	if(n%2==0){
		if(m<n/2) cout<<n-2*m<<" ";
		else cout<<0<<" ";
	}
	else{
		if(m<=n/2) cout<<n-2*m<<" ";
		else cout<<0<<" ";
	}
	for(ll i=01;i<=m;i++){
		if(i*(i-1) >= 2*m){
			cout<<n-i; return;
		} 
	}
	
	cout<<max(0,n-m-1)<<endl;
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

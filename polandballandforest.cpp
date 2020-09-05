
// Problem : C. PolandBall and Forest
// Contest : Codeforces - 8VC Venture Cup 2017 - Elimination Round
// URL : https://codeforces.com/problemset/problem/755/C
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
#define input(a) {for(int i1=01;i1<=a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n,cnt=0; 
	cin>>n; vector<bool> visited(n+1,0);
	vector<ll> a(n+1),adj[n+1]; input(a);
	for(ll i=01;i<=n;i++) {
		adj[i].pb(a[i]);adj[a[i]].pb(i);
	}
	queue<ll> q;
	for(ll i=01;i<=n;i++){
		if(!visited[i]){
			q.push(i); cnt+=1;
			while(!q.empty()){
				ll ff = q.front(); q.pop();
				if(visited[ff]) continue;
				visited[ff] = 1;
				for(ll i=0;i<adj[ff].size();i++){
					ll v = adj[ff][i];
					if(!visited[v]){
						visited[v] = 1;
						q.push(v);
					}
				}
			}
		}
	}
	cout<<cnt<<endl;
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

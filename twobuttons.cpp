
// Problem : B. Two Buttons
// Contest : Codeforces - Codeforces Round #295 (Div. 2)
// URL : https://codeforces.com/problemset/problem/520/B
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
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
unordered_map<ll,bool> visited;
void solve(){
	ll a,b,step=0,ans=INF; cin>>a>>b; queue<ll> q;
	q.push(a);
	while(!q.empty()){
		ll c = q.size();
		while(c--){
			ll u = q.front(); q.pop();
			if(u==b){
				cout<<step<<endl; return;
			}
			visited[u] = 1;
			if(u-b>ans) continue;
			if(u>b){ ans = min(ans,u-b);}
			if(u-1>0 && !visited[u-1]){
				visited[u-1] = 1;
				q.push(u-1);
			}
			if(u*2>0 && u*2-b<ans && !visited[u*2]){
				visited[u*2] = 1;
				q.push(u*2);
			}
		}
		step+=1;
	}
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
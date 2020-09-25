
// Problem : D. Rescue Nibel!
// Contest : Codeforces - Codeforces Round #672 (Div. 2)
// URL : https://codeforces.com/contest/1420/problem/D
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
#define mod (ll)(998244353)
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
ll dp[SIZE];
ll work(int i, ll start, ll end, vector<pi> &a, ll k){
	if(k==0) return 1;
	if(i==a.size()) return 0;
	ll ans = work(i+1,start,end,a,k);
	if(a[i].first <= end || a[i].second >= start) {
		start = max(start,a[i].first);
		end = min(end,a[i].second);
		if(start<=end)
		ans = va(ans + work(i+1,start,end,a,k-1));
		else return 0;
	}
	return dp[i] = ans;
}
void solve(){
	ll n,k;cin>>n>>k; 
	vector<pi> a(n);  
	for(ll i=0;i<n;i++)cin>>a[i].first>>a[i].second;
	memset(dp,-1,sizeof(dp));sort(a);
	cout<<work(0,0,INF,a,k)<<endl;
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
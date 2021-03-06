/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define mod (ll)(998244353)
#define SIZE (ll)(1e6)
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
ll work(int x,vi &a, int n){
	if(x==n) return 1;
	if(x>n) return 0;
	if(dp[x]!=-1) return dp[x];
	ll ans = 0;
	for(int i=0;i<a.size() && x+a[i]<=n; i++){
		ans = (ans+ work(x+a[i],a,n))%mod;	
	}
	return dp[x] = ans;
}
void solve(){
	int n,k;cin>>n>>k;vi s;
	while(k--){
		int l,r; cin>>l>>r;
		for(int i=l;i<=r;i++) s.pb(i);
	}	
	vi a(all(s)); sort(a);
	cout<<work(1,a,n)<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	memset(dp,-1,sizeof(dp));
    	solve();
    }
    return 0;
}
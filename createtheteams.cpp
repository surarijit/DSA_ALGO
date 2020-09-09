
// Problem : C. Create The Teams
// Contest : Codeforces - Educational Codeforces Round 91 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/1380/C
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
#define vi vector<ll>
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
ll dp[SIZE];
ll work(vi &a, ll &n,ll &x, ll i){
	if(i>n) return -INF;
	if(i==n) return 0;
	if(dp[i]!=-1) return dp[i];
	if(a[i]>=x) return dp[i] = work(a,n,x,i+1)+1;
	ll y = x/a[i]; 
	if(x%a[i]) y+=1;
	return dp[i] = max(work(a,n,x,i+1), work(a,n,x,i+y)+1);
	
}
void solve(){
	ll x,n; cin>>n>>x; vi a(n);input(a);sort(a);
	memset(dp,-1,sizeof(dp));
	cout<<work(a,n,x,0)<<endl;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
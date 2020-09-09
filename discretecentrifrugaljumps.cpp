
// Problem : D. Discrete Centrifugal Jumps
// Contest : Codeforces - Codeforces Round #669 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1407/D
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
#define input(a) {for(int i1=0;i1<n;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n; cin>>n;
	vi a(n),dp(n,0); input(a);dp[0] = 0;
	for(ll i=01;i<n;i++){
		ll maxi = a[i-1], mini = a[i-1];
		for(ll j=i-1;j>=0;j--){
			if(j==i-1 || min(a[i],a[j]) > maxi || max(a[i],a[j]) < mini) dp[i] = dp[j]+1;
			maxi = max(maxi,a[j]);
			mini = min(mini,a[j]);
		}
	}
	cout<<dp[n-1];
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
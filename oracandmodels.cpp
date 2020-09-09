
// Problem : B. Orac and Models
// Contest : Codeforces - Codeforces Round #641 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1350/B
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
#define input(a) {int n11 = a.size();for(int i1=01;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=01;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n; cin>>n; vi a(n+1), dp(n+1,01); 
	for(int i=1;i<=n;i++) cin>>a[i];
	 for(int i=1;i<=n;i++){
    for(int j=2*i;j<=n;j+=i){
      if(a[j]>a[i])
        dp[j]=max(dp[j],dp[i]+1);
      
    }
  }
	cout<<maxelem(dp)<<endl;
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
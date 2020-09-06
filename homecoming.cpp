
// Problem : B. Homecoming
// Contest : Codeforces - Codeforces Round #623 (Div. 2, based on VK Cup 2019-2020 - Elimination Round, Engine)
// URL : https://codeforces.com/problemset/problem/1315/B
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
void solve(){
	ll a,b,p; string s;
	cin>>a>>b>>p>>s;
	ll n=s.size();
	vi dp(n,0); dp[n-1] = 0;
	if(n>1) dp[n-2] = (s[n-2]=='B'?b:a);
	for(ll i=n-3;i>=0;i--){
		if(s[i]==s[i+1]) dp[i] = dp[i+1];
		else dp[i] = dp[i+1] + (s[i]=='B'?b:a);
	}
	for(ll i=0;i<n;i++){
		if(dp[i]<=p){
			cout<<i+1<<endl;
			return;
		}
	}
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
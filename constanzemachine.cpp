
// Problem : C. Constanze's Machine
// Contest : Codeforces - Codeforces Round #597 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1245/C
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
#define SIZE (ll)(1e5+10)
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
#define val(s,i) (i>=0 && dp[i]!=-1?dp[i]:work(s,i))
typedef long long ll;
ll dp[SIZE];
ll work(string &s, int i){
	ll ans =0;
	if(i<=0) return 1;
	ans = (ans+val(s,i-1))%mod;
	if(dp[i]!=-1) return dp[i];
	if(i==0) return ans;
	if(s[i]=='n' && s[i-1]=='n') ans = (ans + val(s,i-2))%mod;
	if(s[i]=='u' && s[i-1]=='u') ans= (ans + val(s,i-2))%mod;
	return dp[i] = ans;
}
bool check(string s){
	for(int i=0;i<s.size();i++) {
		if(s[i]=='m' || s[i]=='w') return 1;
	}
	return 0;
}
ll solve(){
	string s; cin>>s;
	if(check(s)) return 0;
	return work(s,s.size()-1);
}
int main()
{
    IOS
    memset(dp,-1,sizeof(dp));
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<solve();
    }
    return 0;
}
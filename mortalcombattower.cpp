
// Problem : C. Mortal Kombat Tower
// Contest : Codeforces - Educational Codeforces Round 95 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1418/problem/C
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
#define SIZE (ll)(5*1e5+100)
#define mod (ll)(1e9+7)
#define vi vector<int>
#define INF 0x3f3f3f3f
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
#define val(i,a,flag) (dp[i][flag]==-1?work(i,a,flag):dp[i][flag])
ll dp[SIZE][2];
ll work(int i, vi &a, int flag){
	if(i>=a.size()) return 0;
	
	ll ans;
	if(flag){
		int cost = 0;
		if(a[i])cost = 1;
		 ans = val(i+1,a,!flag)+cost;
		 if(i+1<a.size()){
		if(a[i+1]) cost = 2;
		ans = min(ans, val(i+2,a,!flag)+cost);}
	}
	else{
		ans = min(val(i+1,a,!flag), val(i+2,a,!flag));
	}
	return dp[i][flag] = ans;
}
void solve(){
	ll n; cin>>n; vi a(n); input(a);
	for(int i=0;i<=n;i++)
	for(int j=0;j<=1;j++)
	dp[i][j]=-1;
	cout<<work(0,a,1)<<endl;return;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
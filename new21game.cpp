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
vector<double> dp;
double help(int j,int &w, int &n, int &k){
	if(j>=k){
		if(j<=n) return 1.0;
		return 0.0;
	} 
	double ans=0.0;
	if(dp[j]!=-1) return dp[j];
	for(int i=1;i<=w;i++){
		ans += help(j+i,w,n,k);
	}
	return dp[j]  = ans*(double)(1.0/w);
	
}
double new21Game(int N, int K, int W) {
		dp = vector<double> (K+1,-1.0);
       return help(0,W,N,K);
       
}
void solve(){
	int n,k,w;cin>>n>>k>>w;
	cout<<new21Game(n,k,w);
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
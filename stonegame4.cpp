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
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
int dp[SIZE][2];
bool help(int n, bool flag){
	if(n==0) return !flag;
	if(n==1) return flag;
	if(dp[n][flag]!=-1) return dp[n][flag];
	for(int i=1;i*i<=n;i++){
		if(help(n-i*i,!flag)==flag){ dp[n][flag] = flag; dp[n][!flag] = !flag; 
		return dp[n][flag];}
	}
	 dp[n][flag] = !flag; dp[n][!flag] = flag;
	 return dp[n][flag];
}
bool work(int n) {
	memset(dp,-1,sizeof(dp));;
        return help(n,1);
 }
void solve(){
	int n;cin>>n;
	cout<<work(n);
}
int32_t main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();cout<<endl;
    }
    return 0;
}
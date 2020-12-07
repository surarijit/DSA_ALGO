/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e4)
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
ll dp[SIZE];
vector<vi> a;
#define next(x,start) upper_bound(all(start),x)-start.begin()
int help(int i, vi &start,int t){
	if(i>=a.size())return 0;
	if(dp[i]!=-1) return dp[i];
	return dp[i] = max(help(i+1,start,t),
	help(next(a[i][0]+a[i][1],start),start,a[i][0]+a[i][1])+ a[i][2]);
}
int phoneCalls(vi start, vi duration ,vi volume){
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<start.size();i++)a.pb({start[i],duration[i],volume[i]});
	sort(a);
	for(int i=0;i<start.size();i++) start[i] =a[i][0];
	return help(0,start,0);	
}
void solve(){
	int n;cin>>n;
	vi start(n), duration(n), volume(n);
	input(start); input(duration); input(volume);
	cout<<phoneCalls(start,duration,volume);
}
int32_t main()
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
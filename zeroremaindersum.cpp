
// Problem : F. Zero Remainder Sum
// Contest : Codeforces - Codeforces Round #677 (Div. 3)
// URL : https://codeforces.com/contest/1433/problem/F
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
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define reset(a,n,val) a.clear(),a.resize(n,val)
#define INF 0x3f3f3f3f
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define max(a,b) (a<b?b:a)
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
#define rep(i,a,b) for(int i=a;i<b;i++)
int n,m,ans=0;
int dp[70][71][71][70];

int work(int i, int j, int cnt, vector<vi> &a,int &k,int sum){
	if(i>=n){
		if(sum==0)
		return 0;
		return -INF;
	}
	if(j==m) {
	   return work(i+1,0,0,a,k,sum);
	}
	if(dp[i][j][cnt][sum]!=-1)
	   return dp[i][j][cnt][sum];
	if(cnt<m/2)
        return dp[i][j][cnt][sum] = max(a[i][j]+work(i,j+1,cnt+1,a,k,(sum+a[i][j])%k), work(i,j+1,cnt,a,k,sum));
	else return dp[i][j][cnt][sum] = work(i,j+1,cnt,a,k,sum);
}

void solve(){
	int k;cin>>n>>m>>k;
	memset(dp,-1,sizeof(dp));
	vector<vi> a(n, vi (m));
	rep(i,0,n)
	   rep(j,0,m)
	      cin>>a[i][j];
	cout<<work(0,0,0,a,k,0);
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
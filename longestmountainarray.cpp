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
vi dynamic(vi a){
	int n=a.size(); vi dp(n,1);
	for(int i=1;i<n;i++) {
		if(a[i]>a[i-1]) dp[i] = dp[i-1]+1;
	}
	return dp;
}
int longestMountain(vector<int>& a) {
		int ans=0;
        vi dp1 = dynamic(a);
        vi b(a); reverse(b);
        vi dp2 = dynamic(b); reverse(dp2);
       // display(dp1); display(dp2);
        for(int i=0;i<a.size();i++) 
        if(dp1[i]>1 and dp2[i]>1)
         ans =  max(ans, dp1[i]+dp2[i]-1);
        return ans;
    }
void solve(){
	int n;cin>>n; vi a(n); input(a);
	cout<<longestMountain(a);
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
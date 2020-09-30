/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#define SIZE (ll)(1e3)
#define mod (ll)(10000003)
#define va(x) ((x)%mod)
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
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
ll dp[SIZE][SIZE];
ll work(int i, int j, vi &a, vi b){
	if(i==a.size()) return maxelem(b);
	//if(dp[i][j]!=-1) return dp[i][j];
	ll ans=INF;
	for(;i<a.size();i++){
		b[j]+=a[i]; 
		ans = min(ans,work(i+1,(j<b.size()-1?j+1:j),a,b));
	}
	return dp[i][j]=ans;
}
int paint(int k, int t,vector<int> &C) {
   vi b(k,0),a(all(C)); memset(dp,-1,sizeof(dp));
	return (int)va(t*work(0,0,a,b));
}
void solve(){
	int n,k,b;cin>>k>>b>>n; vector<int> a(n); input(a);
	cout<<paint(k,b,a);
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
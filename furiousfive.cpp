
// Problem : The furious five
// Contest : HackerEarth - Algorithms - Searching - Binary Search
// URL : https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/the-furious-five-69521576/
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
#define ll unsigned long long int
#define ull unsigned ll
using namespace std;
vi f(SIZE,-1),dp(SIZE,0);
ll work1(int n){
	if(f[n]==-1){
		if(n<5) return 0;
		if(n%5==0) f[n] = work1(n/5)+1;
		else f[n] = 0;
	}
	return f[n];
}
void solve(){
	ll x=0,n; cin>>n;
	x = lower_bound(all(dp),n) - dp.begin();
	cout<<x<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    for(int i=0;i<SIZE;i++){
    	f[i] = work1(i);
    	dp[i] = f[i];
    	if(i) dp[i]+=dp[i-1];
    }
    cout<<dp[SIZE-1]<<endl;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
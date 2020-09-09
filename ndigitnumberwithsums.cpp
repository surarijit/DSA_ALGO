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
#define ll long long
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
int work(vi a, int s,int i,vector<vector<int>> &dp){
	int ans = 0;
	//display(a);
	if(i==a.size()) return s==0;
	if(dp[i][s]!=-1) return dp[i][s];
	for(int j=0;j<=9 && s-j>=0;j++){
		if((i||j)==0) continue;
		a[i] = j;
		ans = (ans+work(a,s-j,i+1,dp))%mod;
	}
	return dp[i][s] = ans;
}
int solve(int A,int B){
	vi a(A,0);
	vector<vector<int>> dp(A+5,vector<int> (B+10,-1));
	return work(a,B,0,dp);
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
		int n ,s;cin>>n>>s;
    	cout<<solve(n,s)<<endl;
    }
    return 0;
}
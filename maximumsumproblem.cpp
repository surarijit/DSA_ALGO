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
#define ll long long
#define check(i,j) (i>=0 && j>=0 && i<n && j<n)
#define val(i,j) (check(i,j)?a[i][j]:0)
#define vi vector<int>
#define vii vector<vector<int>> 
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
ll dp[SIZE];
ll work(int n){
	if(n<=1) return n;
	if(dp[n]!=-1) return dp[n];
	return dp[n] = max(n, work(n/2)+work(n/3)+work(n/4));
}
void solve(){
	int n;cin>>n;
	cout<<work(n)<<endl;;
}
int main()
{
    IOS
    int t=1; memset(dp,-1,sizeof(dp));
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
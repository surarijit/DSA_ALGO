/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>

#define mod (ll)(1e9+7)
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
using namespace std;
typedef long long ll;

#define val(i,j) (dp[i][j]==-1?work(a,b,i,j,dp):dp[i][j])
long work(string &a, string &b, long i, long j, vector<vector<long>> &dp){
	if(i==0) return 1;
	if(j==0) return 0;	
	if(dp[i][j]!=-1) return dp[i][j];
	long cnt=0;
	if(a[i-1]==b[j-1]) cnt += val(i-1,j-1);
	cnt += val(i,j-1);
	return dp[i][j]=cnt;
}

long get(string a, string b){
	vector<vector<long>> dp(a.size()+1,vector<long> (b.size()+1,-1));
	return work(a,b,a.size(),b.size(),dp);
}

void solve(){
	string a,b; cin>>a>>b;
	cout<<get(a,b);
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
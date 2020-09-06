/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
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
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int dp[SIZE];
int work(string s, int i){
	int cnt=0;
	if(i<0) return 1;
	if(dp[i]!=-1) return dp[i];
	if(s[i]!='0') cnt += work(s,i-1)%mod;
	if(s[i-1]=='1') cnt += work(s,i-2)%mod;
	if(s[i-1]=='2' && s[i]>='0' && s[i]<='6') cnt += work(s,i-2)%mod;
	return dp[i] = cnt;
}
int numDecodings(string s) {
	memset(dp,-1,sizeof(dp));
	return work(s,s.size()-1);
}

void solve(){
	string s;cin>>s;
	cout<<numDecodings(s)<<endl;
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
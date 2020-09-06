
// Problem : B. WOW Factor
// Contest : Codeforces - Codeforces Global Round 4
// URL : https://codeforces.com/problemset/problem/1178/B
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
#define SIZE (ll)(1e6+10)
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
typedef long long int ll;
ll dp[SIZE][4];
ll work(string &s, ll i, string s1){
	ll cnt=0;
	if(s1=="wow") return 1;
	if(i<=0 ||s1.size()>3) return 0;
	if(dp[i][s1.size()]!=-1) return dp[i][s1.size()];
	if((s1.empty() || s1.size()==2) && s[i]=='v' && s[i-1]=='v') cnt+= work(s,i-2,s1+'w');
	if(s1.size()==1&&s[i]=='o') cnt+= work(s,i-1,s1+'o');
	cnt += work(s,i-1,s1);
	return dp[i][s1.size()]=cnt;
}
void solve(){
	string s;cin>>s;
	memset(dp,-1,sizeof(dp));
	cout<<work(s,s.size()-1,"");
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
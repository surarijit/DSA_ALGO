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
#define tochar(a) (char)(a+'0')
string s1 = "z";
int dp[SIZE];
int func(int a, vi &b, int i,string s){
	int ans=0;
	if(i<0){
		if(a) return 0;
		if(s1.size()==s.size()) s1 = min(s1,s);
		if(s1.size()<s.size()) s1 = s;
		return 0;
	}
	//if(dp[i]!=-1) return dp[i];
	ans = func(a,b,i-1,s);
	if(a-b[i]>=0)
	ans = max(ans,max(func(a-b[i],b,i-1,tochar(i)+s), func(a-b[i],b,i,tochar(i)+s))+1);
	return dp[i]  = ans;
}
vi work(int a,vi &b){
	s1 = "z"; string s=""; memset(dp,-1,sizeof(dp));
	func(a,b,b.size()-1,s);
	vi ans; 
	for(int i=0;i<s1.size();i++) ans.pb(s1[i]-'0');
	return ans;
}
void solve(){
	int A,n;cin>>A>>n; vi a(n); input(a);
	display(work(A,a));
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
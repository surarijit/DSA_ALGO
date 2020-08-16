/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<n;i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n=6,m;
    //cin>>n;
    string s="600005";
    //cin>>s;
    vector<int> a(n),dp(n+1,0);
    map<int,int> ma;int ans = 0;
    for(int i=0;i<n;i++) a[i] = s[i]-'0';
    for(int i=01;i<=n;i++) dp[i] = dp[i-1] + a[i-1];
    display(dp);
    for(int i=0;i<=n;i++) ans += ma[dp[i]-i]++, cout<<ans<<" ";
    cout<<ans<<endl;
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
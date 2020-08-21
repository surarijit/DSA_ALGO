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
#define pi pair<int,int>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i].first<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int dp[SIZE];
int value(int i){
        if(i==1) return 0;
        if(dp[i]==-1) dp[i] = (i&1 ? value(3*i+1) : value(i>>1))+1;
        return dp[i];
    }
int getKth(int lo, int hi, int k) {
        vector<pi> a;
        for(int i=lo;i<=hi;i++){
            a.pb({value(i),i});
        }
        sort(a);
        display(a);
        return a[k-1].second;    
    }
void solve(){
	int lo,hi,k;
    cin>>lo>>hi>>k;
    cout<<getKth(lo,hi,k)<<endl;
}
int main()
{
    IOS
    memset(dp,-1,sizeof(dp));
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
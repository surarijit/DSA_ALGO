/*
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sqr(x) (x*x)
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define dist(x,y) (sqr(a[x] - a[y])+c)
typedef unsigned long long ll;
void solve(){
	int n; ll c;
    cin>>n>>c;
    vector<ll> a(n),dp(n,INF);
    input(a);
    dp[n-1] = 0;
    for(int i=n-2;i>=0;i--){
        dp[i] = sqr(a[n-1]-a[i])+c;
        for(int j=i+1;j<n;j++){
            dp[i] = min(dp[i],dist(i,j)+dist(j,n-1));
        }
    }
    cout<<dp[0]<<endl;
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
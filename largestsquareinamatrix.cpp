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
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define val(i,j) (check(i,j)?dp[i][j]:0)
#define check(i,j) ((i>=0 && j>=0 &&i<n && j<m)?1:0)
using namespace std;
typedef long long ll;
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n][m], dp[n][m],ans =0;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j],dp[i][j]=0;
    dp[0][0] = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(1 && a[i][j]) dp[i][j] = min(val(i-1,j),min(val(i-1,j-1),val(i,j-1))) + 1;
            ans = max(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
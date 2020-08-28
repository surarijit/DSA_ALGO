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
using namespace std;
typedef long long ll;
bool solve(){
    int n,sum=0;
    cin>>n;
    vector<int> a(n); input(a);
    for(int i=0;i<n;i++) sum += a[i];
    if(sum&1) return 0;
    sum = sum/2;
    bool dp[n+1][1+sum];memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++) dp[i][0] = 1;
    for(int i=01;i<=sum;i++) dp[0][sum]= 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            dp[i][j] = dp[i-1][j];
            if(!dp[i][j] && a[i-1] <= j) dp[i][j] = dp[i-1][j-a[i-1]];
        }
    }     
    return dp[n][sum];   
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
        if(solve()) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
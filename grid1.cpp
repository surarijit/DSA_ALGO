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
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define check(i,j) (i>=0 && j>=0 && i<h && j<w)
#define val(i,j) (check(i,j)?dp[i][j]:0)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int h,w;
    cin>>h>>w;
    int dp[h][w], a[h][w];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) {
        char ch ;
        cin>>ch;
        a[i][j] = (ch=='.'?1:0);
    }
    dp[0][0] = 1;
    for(int i=0;i<h;i++){
        for (int j=0;j<w;j++)
        {
            if(a[i][j])
            dp[i][j] += (val(i-1,j) + val(i,j-1))%mod;
            else dp[i][j] = 0;  
        }
    }
    printf("%d\n",dp[h-1][w-1]);
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
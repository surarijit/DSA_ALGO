/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 300
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int dp[SIZE][SIZE][SIZE];
int lcs(string &x,string &y, string &z, int n,int m,int k){
    if(n<=0 || m<=0 ||k<=0) return 0;
    if(dp[n-1][m-1][k-1]!=-1) return dp[n-1][m-1][k-1];
    if(x[n-1]==y[m-1]==z[k-1]) return dp[n-1][m-1][k-1] = 1+lcs(x,y,z,n-1,m-1,k-1);
    return dp[n-1][m-1][k-1] = max(lcs(x,y,z,n-1,m,k),max(lcs(x,y,z,n,m-1,k),lcs(x,y,z,n,m,k-1)));
}
void solve(){
    int n,m,k; 
    cin>>n>>m>>k;
    string x,y,z; cin>>x>>y>>z;
    cout<<lcs(x,y,z,n,m,k)<<endl;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
    	solve();
    }
    return 0;
}
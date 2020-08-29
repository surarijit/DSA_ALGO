/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 200
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

int solve(string X, string Y, int l, int r, 
					int k) 
{  
	if (!k) 
		return 0; 
	if (l < 0 | r < 0) 
		return 1e9; 

	if (dp[l][r][k] != -1) 
		return dp[l][r][k]; 
	int cost = abs((X[l] - 'a') - (Y[r] - 'a')); 
	return dp[l][r][k] = min(cost + 
					solve(X, Y, l - 1, r - 1, k - 1), min( 
							solve(X, Y, l - 1, r, k), 
							solve(X, Y, l, r - 1, k))); 
} 


void solve(){
    int n,m,k;
    string a,b;
    cin>>n>>m>>k>>a>>b;

	memset(dp, -1, sizeof (dp));
	int ans = solve(a,b,n-1,m-1,k);
	if(ans==1e9) cout<<-1<<endl;
	else cout<<ans<<endl;

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
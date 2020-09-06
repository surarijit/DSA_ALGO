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
int adjacent(vector<vector<int> > &a) {
    int n=a[0].size(),dp[n]={0}; 
    dp[0] = max(a[0][0],a[1][0]); 
    if(n>1)dp[1] = max(dp[0],max(a[0][1],a[1][1]));
    for(int i=02;i<n;i++){
        dp[i] = max(dp[i-1],dp[i-2]+max(a[0][i],a[1][i]));
    }
    return dp[n-1];
    
}
  
void solve(){
	int n; cin>>n;
	vector<vector<int>> a(2,vector<int> (n));
	for(int i=0;i<2;i++){ input(a[i]);}
	cout<<adjacent(a);
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
/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define SIZE 1000
int dp[SIZE][SIZE];
int pal(string a, string &b, int x, int y){
	if(!x || !y) return 0;
	if(dp[x][y]==-1){
		if(a[x-1]==b[y-1]) dp[x][y] = pal(a,b,x-1,y-1)+1;
		else dp[x][y] = max(pal(a,b,x-1,y),pal(a,b,x,y-1));
	}
	return dp[x][y];
}
int work(string s){
	memset(dp,-1,sizeof(dp));
	string s1 =s;
	reverse(s1);
	return pal(s,s1,s.size(),s1.size());
}
void solve(){
 string s;cin>>s;
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

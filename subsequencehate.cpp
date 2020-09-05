
// Problem : B. Subsequence Hate
// Contest : Codeforces - Codeforces Round #646 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1363/B
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
void solve(){
	string a;cin>>a; int n=a.size();
  int left0[n]={0},right0[n]={0},left1[n]={0},right1[n]={0};
  left0[0] = 0; right0[n-1] = 0; left1[0] = 0; right1[n-1] = 0;
  for(int i=01;i<n;i++){
    if(a[i-1]=='0') left0[i] = left0[i-1]+1;
    else left0[i] = left0[i-1];
    if(a[i-1]) left1[i] = left1[i-1]+1;
    else left1[i] = left1[i-1];
  }
  for(int i=n-2;i>=0;i--){
    if(a[i+1]=='0') right0[i] = right0[i+1] +1, right1[i] = right1[i+1];
    else right0[i] = right0[i+1], right1[i] = 1+right1[i+1];
  }
  int ans = left0[0]+right1[0];
  for(int i=0;i<n;i++){
    ans = min(ans,min(left0[i]+right1[i], left1[i]+right0[i]));

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

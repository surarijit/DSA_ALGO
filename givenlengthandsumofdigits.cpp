
// Problem : C. Given Length and Sum of Digits...
// Contest : Codeforces - Codeforces Round #277.5 (Div. 2)
// URL : https://codeforces.com/problemset/problem/489/C
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
#define SIZE (ll)(1e3)
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
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]; cout<<" ";}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int dp[SIZE][SIZE];
bool workmin(vi &a, int s, int x,int &m){
	if(s==0) return 1;
	if(dp[x][s]!=-1) return dp[x][s];
	for(int i=0;i<10 && i<=s && x<m;i++){
		if(x||i){
			a[x] = i;
			if(workmin(a,s-i,x+1,m)) return dp[x][s] = 1;
			a[x] = 0;
		}
	}
	return dp[x][s] = 0;
}
bool workmax(vi &a, int s, int x, int &m){
	if(s==0) return 1;
	if(dp[x][s]!=-1) return dp[x][s];
	for(int i=9;i>=0 && x<m;i--){
		if(x||i){
			if(i<=s){
				a[x] = i;
				if(workmax(a,s-i,x+1,m)) return dp[x][s] = 1;
				a[x] = 0;
			}
		}
	}
	return dp[x][s] = 0;
}
void solve(){
	int m,s; memset(dp,-1,sizeof(dp));
	cin>>m>>s;
	if(s==0) {
		if(m<=1)
			cout<<"0 0";
			else
		cout<<"-1 -1"; return;
	}
	vi a(m,0),b(m,0); bool flag1 = workmin(a,s,0,m);
	memset(dp,-1,sizeof(dp));
	bool flag2= workmax(b,s,0,m);
	if(flag1) display(a);
	if(flag2) display(b);
	if(!flag1 && !flag2) cout<<"-1 -1";
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
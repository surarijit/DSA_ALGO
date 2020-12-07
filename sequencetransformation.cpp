
// Problem : C. Sequence Transformation
// Contest : Codeforces - Codeforces Round #686 (Div. 3)
// URL : https://codeforces.com/contest/1454/problem/C
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
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
int solve(){
	int n;cin>>n; vi a(n); input(a);
	map<int, vi> ma;
	rep(i,0,n){
		ma[a[i]].pb(i);
	}
	int ans=n;
	if(ma.size()==1) return 0;
	for(auto g:ma){
		int x = g.F; 
		vi v = g.S;
		int cnt =0;
		rep(i,01,v.size()){
			if(v[i]==v[i-1]+1) continue;
			cnt++;
		}
		if(v[0]!=0) cnt++;
		if(v.back() != n-1) cnt++;
		ans = min(ans,cnt);
	}
	return ans;
}
int32_t main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cout<<solve()<<endl;
    }
    return 0;
}
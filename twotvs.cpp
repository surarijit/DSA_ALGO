
// Problem : C. Two TVs
// Contest : Codeforces - Educational Codeforces Round 27
// URL : https://codeforces.com/problemset/problem/845/C
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<ll,ll>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define ull unsigned ll
#define F first
#define S second
using namespace std;
bool solve(){
	int n;cin>>n;int sum=0;
	vector<pi> v;
	for(int i=0;i<n;i++){
		int l,r;cin>>l>>r;
		v.pb({l,1}); v.pb({r+1,-1});
	}
	sort(v);
	for(int i=0;i<v.size();i++){
		sum += v[i].S;
		if(sum>2) return 0;
	}
	return 1;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<(solve()?"YES":"NO");
    }
    return 0;
}
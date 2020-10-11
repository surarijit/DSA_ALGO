
// Problem : A. Knight Tournament
// Contest : Codeforces - Codeforces Round #207 (Div. 1)
// URL : https://codeforces.com/problemset/problem/356/A?fbclid=IwAR3jtc437PLUDRmhfxNFnIiVS2o22mX0SGuGsrYsDb3I3BV-Vz7UvI7EzRI
// Memory Limit : 256 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
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
#define minelem(a) *min_ele    ment(all(a))
#define pb push_back
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void solve(){
	ll n,m;cin>>n>>m;
	vi parent(n+1,0),v;
	set<int> s;
	for(int i=1;i<=n;i++) parent[i]=i,s.insert(i);
		while(m--){
		int l,r,x;cin>>l>>r>>x;
		v.clear();
		set<int>::iterator g = s.lower_bound(l);
		while(g!=s.end()){
			int i = *g;
			if(i>r) break;
			if(i!=x){parent[i] = x; v.pb(i);}
			g++;
		}
		
		for(int u:v) s.erase(u);
	}
	for(int i=1;i<=n;i++)
		cout<<(parent[i]==i?0:parent[i])<<" ";
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
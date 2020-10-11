
// Problem : D. Divide by three, multiply by two
// Contest : Codeforces - Codeforces Round #479 (Div. 3)
// URL : https://codeforces.com/problemset/problem/977/D
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
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
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
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define int ll 
#define ull unsigned ll
using namespace std;
bool work(int u, map<int,int> &visited, vi &v,int n){
	if(visited[u]==0) return 0;
	visited[u]=0;
	n-=1;
	if(!n) {v.pb(u);return 1;}
	if((u%3==0 and work(u/3,visited,v,n)) || work(u*2,visited,v,n)) {
		v.pb(u);
		return 1;
	}
	visited[u]=1;
	return 0;
}
void solve(){
	map<int,int> ma, visited;
	int n; cin>>n; vi a(n); input(a);
	for(int i=0;i<n;i++)ma[a[i]]+=1;
	for(int i=0;i<n;i++){
		visited = ma;
		vi v;
		if(work(a[i],visited,v,n)) {reverse(v);display(v); return;}
	}
	
}
int32_t main()
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
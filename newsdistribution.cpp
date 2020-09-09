
// Problem : C. News Distribution
// Contest : Codeforces - Educational Codeforces Round 65 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/1167/C
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
#define vi vector<ll>
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
typedef unsigned long long int ll;
ll n; 
vi parent(SIZE,0), size(SIZE,0);
void initialise(ll i){
	parent[i] = i;
	size[i] = 1;
}
ll findparent(ll i){
	return (parent[i]==i ? i : parent[i]= findparent(parent[i]));
}
void makeunion(ll a, ll b){
	if(a==b) return;
	if(size[a] < size[b]) swap(a,b);
	parent[b] = a;
	size[a] += size[b];
}
void solve(){
	ll m; cin>>n>>m;
	for(ll i=1;i<=n;i++) initialise(i);
	while(m--){
		ll k; cin>>k; 
		if(k==0) continue; ll lst = -1;
		while(k--){
			ll x; cin>>x;
			if(lst==-1){
				lst = x; continue;
			}
			makeunion(findparent(lst),findparent(x));
		}
	}
	for(ll i=1;i<=n;i++) cout<<size[findparent(i)]<<" ";
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
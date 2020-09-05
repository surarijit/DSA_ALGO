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
#define abs(x) ((x)>0 ? (x) : -(x))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define diff(a) (abs(maxelem(a)-minelem(a)))
#define pb push_back
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<ll,ll>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int n=a.size();for(int i1=0;i1<n;i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
bool work(vector<int>& a, ll k, ll t) {
       ll n=a.size(); 
       vector<pi> v; 
       for(int i=0;i<n;i++)v.pb({a[i],i});
       sort(v);
       int start=0,end=1;
       while(end<n){
       	pi x = v[start]; pi y = v[end];
       	if(abs(x.first-y.first)<=t && abs(x.second-y.second)<=k) return 1;
       	if(abs(x.first-y.first) > t) start++;
       	if(abs(x.second - y.second)>k) end++;
       	if(start==end) end++;
       }
       return 0;
    }
    
void solve(){
	int n;cin>>n;
	vector<int> a(n); input(a);
	int k,t;
	cin>>k>>t;
	cout<<work(a,k,t);
	
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

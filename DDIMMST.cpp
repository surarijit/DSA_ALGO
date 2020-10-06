
// Problem : D-Dimensional MST
// Contest : CodeChef - October Challenge 2020 Division 2
// URL : https://www.codechef.com/OCT20B/problems/DDIMMST
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
#include<vector>
#include<queue>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
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
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
ll parent[SIZE],s[SIZE];
void initial(ll n=SIZE-1){
	for(ll i=0;i<=n;i++){ parent[i] = i, s[i]=1;}
}
ll findroot(ll x){
	return parent[x]==x?x:parent[x]=findroot(parent[x]);
}
void make_union(ll a , ll b){
	if(s[a]<s[b]) swap(a,b);
	parent[b]=a;
	s[a]+= s[b];
}
ll distance(vi a, vi b){
	ll ans=0;
	for(ll i=0;i<a.size();i++) ans+= abs(a[i]-b[i]);
	return ans;
}
void solve(){
	ll n,d,cost=0;cin>>n>>d;
	vector<vi> a(n, vi (d));
	ll dist[n][n];
	for(int i=0;i<n;i++) input(a[i]);
	pqq<vi> q; 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			dist[i][j] = dist[j][i] = distance(a[i],a[j]);
		}
	}
	initial(n+1);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++) q.push({dist[i][j],i,j});
	}
	while(!q.empty()){
		vi ff = q.top(); q.pop();
		ll x = findroot(ff[1]), y = findroot(ff[2]);
		if(x!=y) 
		{make_union(x,y); cost+= ff[0];}
		else if(s[x]==n) break;
	}
	/*
	q.push({0,0});
	while(!q.empty()){
		ll u = q.top().second,w= q.top().first; q.pop();
	 	if(visited[u]) continue;
		//cout<<u<<endl;
		cost+=w; visited[u]=1;
		for(int i=0;i<n;i++){
			 if(visited[i]==0) q.push({dist[i][u],i});
		}
	}*/
	cout<<cost<<endl;
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
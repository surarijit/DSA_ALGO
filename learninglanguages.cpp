
// Problem : A. Learning Languages
// Contest : Codeforces - Codeforces Round #170 (Div. 1)
// URL : https://codeforces.com/problemset/problem/277/A
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
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
int parent[SIZE];
void initialise(int n){
	for(int i=0;i<=n;i++) {
		parent[i] = i;
	}
}
int find_parent(int i){
	if(i==parent[i]) return i;
	return parent[i] = find_parent(parent[i]);
}
void make_union(int a, int b){
	if(a==b) return;
	parent[a] = parent[b];
}
void solve(){
	int n,m,cost=0,k; cin>>n>>m; vi adj[m+1]; initialise(n+1);
	for(int i=1;i<=n;i++){
		cin>>k; 
		if(k==0) adj[k].pb(i);
		while(k--){
			int u; cin>>u;
			adj[u].pb(i);
		}
	}
	if(adj[0].size()==n){
		cout<<n<<endl;return;
	}
	for(int i=1;i<=m;i++){
		vi a = adj[i]; 
		for(int j=1;j<a.size();j++) 
			make_union(find_parent(a[0]), find_parent(a[j]));
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(find_parent(i)!=find_parent(j)){
				make_union(find_parent(i), find_parent(j));
				cost+=1;
			}
		}
	}
	
	cout<<cost<<endl;
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

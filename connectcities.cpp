
// Problem : C - Connect Cities
// Contest : AtCoder - ACL Beginner Contest
// URL : https://atcoder.jp/contests/abl/tasks/abl_c
// Memory Limit : 1024 MB
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
int parent[SIZE], siz[SIZE];
void initial(int n=SIZE-1){
	for(int i=0;i<=n;i++){
		parent[i]=i,siz[i]=1;
	}
}
int findroot(int x){
	return parent[x]==x? x: parent[x]=findroot(parent[x]);
}
void make_union(int a,int b){
	a = findroot(a), b=findroot(b);
	if(siz[a]<siz[b]) swap(a,b);
	parent[b]=a;
	siz[a]+=siz[b];
}
void solve(){
	ll n,m;cin>>n>>m; initial(n);
	while(m--){
		int u,v; cin>>u>>v;
		make_union(u,v);
	}
	set<int> s;
	for(int i=1;i<=n;i++){
		s.insert(findroot(i));
	}
	cout<<s.size()-1<<endl;
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

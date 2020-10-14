
// Problem : C1. Party
// Contest : Codeforces - ABBYY Cup 2.0 - Easy
// URL : https://codeforces.com/problemset/problem/177/C1
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
#include<iostream>
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
#define minelem(a) *min_element(all(a))
#define reset(a,n,val) a.clear(),a.resize(n,val)
#define pb push_back
#define pi pair<int,int>
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define REV(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
vi parent,s;
int findroot(int x){
	if(x==parent[x]) return x;
	return parent[x] = findroot(parent[x]);
}
void initial(int n){
	for(int i = 0;i<n;i++){
		parent[i] = i;
		s[i] = 1;
	}
}
void make_union(int a,int b){
	 a = findroot(a);
    b = findroot(b);
    if (a != b) {
        if (s[a] < s[b])
            swap(a, b);
        parent[b] = a;
        s[a] += s[b];
    }
}

void solve(){
	int n,k,m,ans=0; cin>>n>>k; vector<bool> eligible(n+1,1);
	reset(parent,n+1,0); reset(s,n+1,1);
	initial(n+1);
	while(k--){int u,v;cin>>u>>v; make_union(u,v);}
	cin>>m;
	while(m--){int u,v; cin>>u>>v;
	if(findroot(u)==findroot(v)){
		eligible[parent[u]] = 0;
	}}
	for(int i=1;i<=n;i++){
		ans = eligible[findroot(i)]?max(ans,s[parent[i]]):ans;
	}
	cout<<ans;
	
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
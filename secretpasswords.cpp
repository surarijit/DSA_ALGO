
// Problem : D. Secret Passwords
// Contest : Codeforces - Codeforces Round #603 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1263/D
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
#include<set>
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
vi adj[27];
int parent[SIZE];
void initialise(int n){
	for(int i=0;i<=n;i++) parent[i]=i;
}
int find_root(int x){
	return ((x==parent[x])?x:parent[x] = find_root(parent[x]));
}
void make_union(int a, int b){
	a=find_root(a), b= find_root(b);
	if(a==b) return ;
	parent[b] = a;
}
void solve(){
	int n; cin>>n; initialise(n);
	for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<s.size();j++){
			adj[s[j]-'a'].pb(i);
		}
	}
	for(int i=0;i<27;i++){
		if(adj[i].empty()) continue;
		int x = adj[i][0];
		for(int y:adj[i]) make_union(x,y);
	}
	set<int> s2;
	for(int i=0;i<n;i++) s2.insert(find_root(i));
	cout<<s2.size()<<endl;
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
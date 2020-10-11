
// Problem : D. Valid BFS?
// Contest : Codeforces - Manthan, Codefest 18 (rated, Div. 1 + Div. 2)
// URL : https://codeforces.com/problemset/problem/1037/D?fbclid=IwAR2Il98gCrnigfZwdJxGnvJnTWg3QfKpXlihAdnflOGom3y76ZwOa6kLOHE
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
#include<queue>
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
int parent[SIZE],s[SIZE];
int findroot(int x){
	if(x==parent[x]) return x;
	return parent[x] = findroot(parent[x]);
}
void initial(int n=SIZE-1){
	for(int i = 1;i<=n;i++){
		parent[i] = i;
		s[i] = 1;
	}
}
void make_union(int a,int b){
	 a = findroot(a);
    b = findroot(b);
   parent[a] = b;
}
bool solve(){
	int n; cin>>n; initial(n+1);
	int m=n-1; vi adj[n+1],visited(n+1,0);
	while(m--){
		int u,v;cin>>u>>v; adj[u].pb(v); adj[v].pb(u);
	}
	vi a(n); input(a);
	queue<int> q;
	q.push(1);int k=0;
	while(!q.empty()){
		int c=q.size();
		for(int j=0;j<c;j++) {make_union(a[k++],1);}
		while(c--){
			int ff = q.front(); q.pop();
			if(parent[ff]!=1){ return 0;}
			visited[ff] = 1;
			for(int v:adj[ff]) {
				if(!visited[v]){visited[v]=1; q.push(v);}
			}
		}
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
    	cout<<(solve()?"Yes":"No");
    }
    return 0;
}
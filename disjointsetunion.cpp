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
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int parent[SIZE],s[SIZE];
int find_parent(int x){
	if(x==parent[x]) return x;
	return parent[x] = find_parent(parent[x]);
}
void initialise(int &n){
	for(int i = 1;i<=n;i++){
		parent[i] = i;
		s[i] = 1;
	}
}
void make_union(int a,int b, int &n){
	 a = find_parent(a);
    b = find_parent(b);
    if (a != b) {
        if (s[a] < s[b])
            swap(a, b);
        parent[b] = a;
        s[a] += s[b];
    }
}
void display(int n){
	map<int,bool> ma;multiset<int> s1;
	for(int i=1;i<=n;i++){
		if(ma[parent[i]] ==0){
			ma[parent[i]] = 1;
			s1.insert(s[parent[i]]);
		}
	}
	for(auto it=s1.begin();it!=s1.end();it++) cout<<*it<<" ";
	cout<<endl;
}
void solve(){
	int n,m; cin>>n>>m;
	initialise(n);
	vector<int> s(n);
	while(m--){
		int u,v;
		cin>>u>>v;
		make_union(u,v,n);
		display(n);
	}
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

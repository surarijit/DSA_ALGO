
// Problem : B. Mahmoud and Ehab and the message
// Contest : Codeforces - Codeforces Round #473 (Div. 2)
// URL : https://codeforces.com/problemset/problem/959/B?fbclid=IwAR1hfy3HFdyDjAQEC8DxVHRi50LIrsGiaKlMCb13KQ6k8fWKF3H09_I25-Y
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
#include<map>
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
    if (a != b) {
        if (s[a] < s[b])
            swap(a, b);
        parent[b] = a;
        s[a] += s[b];
    }
}
void solve(){
	int n,k,m;cin>>n>>k>>m;initial(n);
	vector<string> words(n); input(words);
	vi cost(n); input(cost);
	for(int j=0;j<k;j++){
		int x;cin>>x;
		int y; cin>>y; x--;y--;
		if(x==0) continue;
		while(x--){
			int z; cin>>z;z--;
			int g = findroot(y), h = findroot(z);
			cost[g] = cost[h] = min(cost[g],cost[h]);
			make_union(g,h);
		}
	}
	map<string, int> ma;
	for(int i=0;i<n;i++){
		ma[words[i]] = cost[findroot(i)];
	}
	ull ans=0;
	while(m--){
		string s;cin>>s;
		ans+=ma[s];
	}
	cout<<ans<<endl;
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

// Problem : B. A New Technique
// Contest : Codeforces - Codeforces Round #679 (Div. 2, based on Technocup 2021 Elimination Round 1)
// URL : https://codeforces.com/contest/1435/problem/B
// Memory Limit : 512 MB
// Time Limit : 1000 ms
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
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void solve(){
	int n,m;cin>>n>>m;
	vector<vi> a(n, vi (m,0));
	vi ans[n];
	for(int i=0;i<n;i++) input(a[i]);
	unordered_map<int,int> col;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int x;cin>>x; col[x] = j;
		}
	}
	for(int i=0;i<n;i++){
		ans[col[a[i][0]]] = a[i];
	}
	for(int i=0;i<n;i++) display(ans[i]);
}
int32_t main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
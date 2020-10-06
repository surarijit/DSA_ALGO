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
void help(vi &a, vector<pi> &query){
	int n=a.size();
	for(pi gh:query){
		int t = gh.first, m=gh.second;
		t = t%(2*n);
		if(t<n){
			if(t+m-1<n) cout<<a[t+m-1];
			else cout<<-1;
		}
		else{
			t-=n;
			if(m<=t) cout<<a[m-1];
			else cout<<-1;
		}
		cout<<endl;
	}
}
void solve(){
	int n;cin>>n; vi a(n); input(a);
	int q;cin>>q; vector<pi> query;
	while(q--){int u,v;cin>>u>>v; query.pb({u,v});}
	help(a,query);
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
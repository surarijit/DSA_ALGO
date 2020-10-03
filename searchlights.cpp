
// Problem : D. Searchlights
// Contest : Codeforces - Grakn Forces 2020
// URL : https://codeforces.com/contest/1408/problem/D
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
#include<iomanip>
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
ll ans= INF;
void work(int i, vector<vi> &a, ll cx, ll cy, ll &bx, ll &by){
	if(i==a.size()){
		ans = min(ans,cy+cx);
		return;
	}
	a[i][0]+= cx; a[i][1]+=cy;
	ll c = max(0,bx+1-a[i][0]);
	work(i+1,a,cx+c,cy,bx,by);
	c = max(0,by+1-a[i][1]); 
	work(i+1,a,cx,cy+c,bx,by);
}
void solve(){
	int n,m;cin>>n>>m; 
	vector<vi> a(n,vi (2)); 
	ll cx=0,cy=0;
	for(int i=0;i<n;i++)input(a[i]);
	while(m--){
		int x,y;cin>>x>>y;
		cx = max(cx,x);
		cy = max(cy,y);
	}
	work(0,a,0,0,cx,cy);
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
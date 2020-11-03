
// Problem : Two Flowers
// Contest : CodeChef - Practice(Easy)
// URL : https://www.codechef.com/problems/TWOFL
// Memory Limit : 256 MB
// Time Limit : 4000 ms
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
#define check(i,j) (i>=0 and j>=0 and i<n and j<m and a[i][j]!=-1)
int n,m,ans=0;
void help(int x, int y, set<int> s,vector<vi> &a,int cnt){
	s.insert(a[x][y]);
	if(s.size()>2) return;
	cnt+=1;
	ans = max(ans,cnt);
	int g = a[x][y]; 
	a[x][y] = -1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(abs(i)!= abs(j) and check(x+i,y+j)) help(x+i,y+j,s,a,cnt);
		}
	}
	//a[x][y] = g;
}
void solve(){
	cin>>n>>m;
	vector<vi> a(n,vi (m,0)),b;
	for(int i=0;i<n;i++) input(a[i]);
	set<int> s;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++)
	{	b=a;
		help(i,j,s,b,0);}
	cout<<ans<<endl;
}
int32_t main()
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
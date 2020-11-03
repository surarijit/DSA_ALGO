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
bool help(int n, vi a, int s){
	s-=1; vector<bool> visited(n,0);
	if(a[s]==0) return 0;
	queue<int> q;q.push(s);
	while(!q.empty()){
		int x = q.front(); q.pop();
		visited[x]=1;
		if(a[x]==0) return 1;
		if(x+a[x] < n and !visited[x+a[x]]) {
			q.push(x+a[x]); visited[x+a[x]] = 1;
		}
		if(x-a[x] >=0 and !visited[x-a[x]]) {
			q.push(x-a[x]); visited[x-a[x]]=1;
		}
	}
	return 0;
}
void printposs(int n, vi a, int s){
	if(help(n,a,s)==1) cout<<"YES\n";
	else if(help(n,a,s)==0) cout<<"NO\n";
}
void solve(){
	int n;cin>>n; vi a(n); input(a);
	int s;cin>>s;
	printposs(n,a,s);
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
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
#define check(i,j) (i>=0 and j>=0 and i<n and j<m and s[i][j]=='.' and !vis[i][j])
bool solve(){
	int n;cin>>n;
	vector<string> s(n);input(s);
	int m=s[0].size();
	int maxtime;cin>>maxtime;
	queue<pi> q;
	q.push({0,0});
	int steps=0;
	bool vis[n+1][m+1]; memset(vis,0,sizeof(vis));
	while(!q.empty()){
		int c=q.size();
		while(c--){
		  pi x = q.front();q.pop();
		  vis[x.F][x.S] = 1;
		  if(x.F==n-1 and x.S==m-1) return 1;
		  for(int i=-1;i<=1;i++){
		  	for(int j=-1;j<=1;j++){
		  		if(abs(i) != abs(j) and check(x.F+i,x.S+j)){
		  			vis[x.F+i][x.S+j] = 1;
		  			q.push({x.F+i,x.S+j});
		  		}
		  	}
		  }
		}
		steps+=1;
		if(steps>maxtime) return 0;
	}
	return 0;
}
int32_t main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<solve();
    }
    return 0;
}
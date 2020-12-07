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
#define N SIZE
int dp[N];
vector<int> g[N],wt[N];
int answer=0;

vi val(N,0);

int dfs(int u,int p)
{
	int &ans=dp[u],va,size=g[u].size(),i;
	if(ans!=-1) return ans;
	ans=0;
	for(i=0;i<size;i++)
	{
		int v=g[u][i];
		if(v==p) continue;
		va=dfs(v,u);
		ans=max(ans,va+wt[u][i]);
	}
	val[u]=ans;
	answer=max(answer,ans);
	return ans;
}

void solve()
{
	if(0) cout<<"Execute this function";
}

int32_t main()
{
	solve();
	memset(dp,-1,sizeof(dp));
	int n,q,i,a,b,c;
	cin>>n>>q;
	vi x(q),y(q),z(q);
	for(i=0;i<q;i++)
	{
		cin>>a>>b>>c;
		x[i]=a;y[i]=b;z[i]=c;
		g[a].pb(b); wt[a].pb(abs(c));
	}
	for(i=1;i<=n;i++)
		if(dp[i]==-1) dfs(i,i);
	for(i=0;i<q;i++)
	{
		a=x[i];
		b=y[i];
		c=z[i];
		if((val[a]-val[b])!=c)
			answer=(int)INF;
	}
	if(answer>100) cout<<"-1"<<endl;
	else cout<<answer<<endl;
	return 0;
}
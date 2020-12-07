/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
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
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define int ll
#define ull unsigned ll
using namespace std;
#define SIZE (int)(1e4)
bool ma[SIZE][2]={{0}};
 int minimumJumps(vector<int>& forbidden, int a, int b, int X) {
        for(int x:forbidden){
        	ma[x][0]=ma[x][1]=1;
        }
       queue<pi> q;int steps=0;
       q.push({0,0});
       while(!q.empty()){
       	int c=q.size();
       	while(c--){
       		pi x=q.front(); q.pop();
       		int u=x.F, flag = x.S;
       		if(u<0 or u>=SIZE or ma[u][flag]) continue;
       		if(u==X)return steps;
       		ma[u][flag]=1;
       		q.push({u+a,0});
       		if(!flag and u-b>=0) q.push({u-b,1});
       	}
       	steps+=1;
       }
       return -1;
    }
void solve(){
	int n; cin>>n; vi a(n); input(a);
	int b,c,d;cin>>b>>c>>d;
	cout<<minimumJumps(a,b,c,d);
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
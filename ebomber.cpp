/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 3e5 + 5
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
ll maxelemt(ll a[], ll);
ll solve();
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
        printf("%lld\n",solve());
    }
    return 0;
}
#define int ll
int maxelemt(int a[], int n){
    int m = 0;
    for(int i=0;i<n;i++) m = max(m,a[i]);
    return m;
}
int solve(){
	int H,W,M,u,v;
    cin>>H>>W>>M;
    map<pi,int> ma;
    int col[W+1], row[H+1];
    memset(col,0,sizeof(col)); memset(row,0,sizeof(row));
    while(M--){
        cin>>u>>v;
        ma[{u,v}] += 1;
        col[v] += 1;row[u] += 1;
    }
    int max_row = maxelemt(row,H+1), max_col = maxelemt(col,W+1);
    vector<int> a,b;
    int ans = 0;
    for(int i=01;i<=H;i++) 
        if(max_row==row[i]) a.pb(i);
    for(int i=01;i<=W;i++)
        if(max_col == col[i]) b.pb(i);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            int x = row[a[i]] + col[b[j]];
            if(ma[{a[i],b[j]}]) x-=1;
            ans = max(x,ans);
        }
    }
    return ans;
}
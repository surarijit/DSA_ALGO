/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0? (a) : -(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define sc(n) scanf("%d\n",&n);
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
ll value(ll a, ll b, ll x, ll y, ll n){
	ll a1 = max(max(0,a-n),x);
	n -= (a-a1); a= a1;
	b = max(b-n,y);
	return a*b;
}
void solve(){
	ll a,b,x,y,n;
	cin>>a>>b>>x>>y>>n;
	cout<<min(value(b,a,y,x,n),value(a,b,x,y,n))<<endl;
   
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
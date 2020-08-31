
// Problem : B. Power Sequence
// Contest : Codeforces - Codeforces Round #666 (Div. 2)
// URL : https://codeforces.com/contest/1397/problem/B
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
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(ll i1=0;i1<n;i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    vector<ll> a(n,0); input(a);
    sort(a);ll mincost = 1e17;
    for(int i=01;i<=1e5;i++){
    	ll cost = 0,c=1;
    	for(int j=0;j<n;j++){
    		cost += abs(a[j]-c);
    		if(cost> mincost) break;
    		c = c*i;
    	}
    	mincost = min(mincost,cost);
    }
    printf("%lld\n",mincost);
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
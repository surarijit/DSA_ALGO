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
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<ll,ll>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(ll i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(ll i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;

void pre(ll dp[]){
    ll k=0;
    set<ll>s;
    s.insert(1);
    while(k<SIZE-2){
        ll x  = *s.begin();
        s.erase(s.begin());
        dp[k++] = x;
        s.insert(x*2); s.insert(x*3); s.insert(x*5);
    }
}
void solve(ll dp[]){
    ll n;
    cin>>n;
    cout<<dp[n-1]<<endl;
}
int main()
{
    IOS
    ll t=1;
    ll dp[SIZE];
    pre(dp);
    cin>>t;
    while(t--){
        solve(dp);
    }
    return 0;
}
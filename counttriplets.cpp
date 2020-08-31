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
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef unsigned long long ll;
#define combi(n) (n*(n-1)*(n-2)/6)
ll ans(vector<ll> a, ll r){
    ll n = a.size(),cnt=0;
    unordered_map<ll,ll> ma;
    for(int i=0;i<n;i++) ma[a[i]]+=1;
    if(r==1){
        for(int i=0;i<n;i++){
            cnt += combi(ma[a[i]]);
            ma[a[i]] = 0;
        }
        return cnt;
    }
    for(int i=0;i<n;i++){
        cnt += ma[a[i]] * ma[a[i]*r] *ma[a[i]*r*r];
        ma[a[i]] =0;
    }
    return cnt;
}
void solve(){
    ll n, r;
    cin>>n>>r;
    vector<ll> a(n);input(a);
    cout<<ans(a,r)<<endl;
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
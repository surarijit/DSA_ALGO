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
#define SIZE 100008
#define mod (ll)(1e9+7)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define update(a,maxi) {for(int i=0;i<a.size();i++) a[i] = maxi-a[i];}
using namespace std;
typedef long long ll;
ll find_max_element(vector<ll> a){
    ll m = a[0];
    for(int i=01;i<a.size();i++){
        m = max(m,a[i]);
    }
    return m;
}
void solve(){
	ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    input(a);
    if(!k) {
        display(a);
        return;
    }
    ll d = find_max_element(a);
    update(a,d);k-=1;
    d = find_max_element(a);
    if(k&1)update(a,d);
    display(a);
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
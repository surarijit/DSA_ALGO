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
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(ll i1=0;i1<n-1;i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int work(int x, vector<ll> a, std::vector<bool> &visited){
    int ans = 1;
    visited[x] = 1;
    if(x && !visited[x-1] && a[x-1] == 0) ans+= work(x-1,a,visited);
    if(x<a.size()-1 && !visited[x+1] && a[x+1]==1) ans+= work(x+1,a,visited);
    return ans;
}
void solve(){
	ll n,test;
    cin>>n;
    vector<ll> a(n-1,0);
    for(ll i=0;i<n-1;i++) cin>>a[i];
    cin>>test;
    while(test--){
        char ch;
        cin>>ch;
        if(ch=='U'){
            for(int i=0;i<a.size();i++) a[i] = 1-a[i];
            display(a);
        }
        else{
            ll y,x,cnt=0;cin>>x;x-=1; y=x;
            while(x-1 >=0 && a[x-1]==0){
                cnt+=1;
                x--;
            }
            while(y<a.size() && a[y]){
                y+=1;
                cnt+=1;
            }
            cout<<cnt+1<<endl;
        }
    }
}
int main()
{
    IOS
    int t=1;
   // cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
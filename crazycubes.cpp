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
using namespace std;
typedef long long ll;
ll dp[SIZE];
void pre(){
	ll i=0,cnt=0,x,k=01;
    while(k<SIZE){
        i+=1;
        for(ll j=1;j<=i;j++){
            cnt+=1;
            for(x=0;x<j&&k<SIZE;x++) dp[k++] = cnt;
        }
    }
}
int main()
{
    IOS
    pre();
    int t=1;
    cin>>t;
    while(t--){
    	ll N;
        cin>>N;
        if(N<SIZE) cout<<dp[N]<<endl;
        else cout<<dp[SIZE-1]<<endl;
    }
    return 0;
}
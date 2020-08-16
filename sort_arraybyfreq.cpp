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
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i]; cout<<endl;}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define pi pair<int,int> 
void solve(){
	int n;
    cin>>n;
    vector<int> a(n),ans;
    input(a);
    unordered_map<int,int> ma;
    for(int i=0;i<n;i++) ma[a[i]]++;
    multiset<pi> s;
    for(auto it = ma.begin();it!=ma.end();it++){
        s.insert({it->second,it->first});
    }

    for(auto it = s.begin();it!=s.end();it++){
        pi x = *it;
        while(x.first--){
            ans.pb(x.second);
        }
    }

    display(ans);
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
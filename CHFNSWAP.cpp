
// Problem : Chefina and Swap
// Contest : CodeChef - September Challenge 2020 Division 2
// URL : https://www.codechef.com/SEPT20B/problems/CHFNSWAP
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
#define vi vector<int>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<ll,ll>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n;cin>>n; 
	if(n==3) {
		cout<<2<<endl; return;
	}
	map<pi,bool> ma;
	for(ll i=1;i<=n;i++){
		for(ll j=i+1;j<=n;j++){
			for(ll m=i;m<j;m++){
				if(m*(m+1)/2 + j-i == n*(n+1)/4)
				{
					//cout<<i<<" "<<j<<endl;
					ma[{i,j}] = 1;
				}
			}
		}
	}
	cout<<ma.size()<<endl;

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
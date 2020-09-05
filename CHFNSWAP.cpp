
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
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	ll n; cin>>n;
	ll right = n*(n+1)/4,cnt=0,left=0;
	for(ll i=1;i<=n;i++){
		left += i;
		ll diff = right-left;
		for(int j=1;diff&&j<=n;j++){
			if(j+diff > i && j+diff <= n) {
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;

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
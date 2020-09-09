
// Problem : B. Array Cancellation
// Contest : Codeforces - Codeforces Round #668 (Div. 2)
// URL : https://codeforces.com/contest/1405/problem/B
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
#define vi vector<ll>
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
void work(vi a){
	int n=a.size(); vi right(n); ll y = 0,ans=0;
	for(int i=n-1;i>=0;i--){
		right[i] = (i==n-1?0:right[i+1]);
		if(a[i]<0) right[i]-= a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]>0){
			right[i] -= y;
			ll x = min(a[i],right[i]);
			a[i] -= x; ans += a[i];
			right[i] -= x; y += x;
		}
	}
	cout<<ans<<endl;
}
void solve(){
	int n;cin>>n; vi a(n); input(a);
	work(a);
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
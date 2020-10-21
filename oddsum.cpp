
// Problem : B. Odd sum
// Contest : Codeforces - Educational Codeforces Round 19
// URL : https://codeforces.com/problemset/problem/797/B
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
#include<iostream>
#include<vector>
#define SIZE (ll)(1e3)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<ll>
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;

void solve(){
	ll n,odd=INF,sum=0,minodd = odd,maxodd=-odd;
	cin>>n; vi a(n); input(a);
	for(ll i=0;i<n;i++){
		if(a[i]>0){
			sum+= a[i];
			if(a[i]&1)minodd = min(minodd,a[i]);
		}
		else if(a[i]&1) maxodd = max(maxodd,a[i]);
	}
	if(sum&1)cout<<sum;
	else{
		sum-= min(-maxodd,minodd);
		if((sum&1) == 0) sum=-1;
		cout<<sum;
	}
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
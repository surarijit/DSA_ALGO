
// Problem : B. Just Eat It!
// Contest : Codeforces - Codeforces Round #613 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1285/B
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
#define input(a) {ll n11 = a.size();for(ll i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
bool solve(){
	ll n,sum1=0,maxsum  = 0,s2 = 0; cin>>n; bool flag = 1;
	vi a(n); input(a);
	for(int i=0;1 && i<n;i++){
		if(a[i]<0){
			flag=0;
		}
		sum1+= a[i];
	}
	for(ll i=0;i<n-1;i++){
		s2 += a[i];
		maxsum = max(s2,maxsum);
		s2 = max(0,s2);
	}
	s2=0;
	for(ll i=1;i<n;i++){
		s2 += a[i];
		maxsum = max(s2,maxsum);
		s2 = max(0,s2);
	}
	return sum1>maxsum;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	cout<<(solve()?"YES\n":"NO\n");
    }
    return 0;
}
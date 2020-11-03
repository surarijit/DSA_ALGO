/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
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
int help(string x, int k){
	int cnt=0;
	for(char a:x){
		if(a-'0'==k) cnt+=1;
	}
	return cnt;
}
string solve(){
	int k;cin>>k;
	ll n; cin>>n;
	if(n==0) return "-1";
	string x,ans;
	int high = 0;
	for(int i=0;i<n;i++){
		cin>>x;
		int nk =  help(x,k);
		if(nk>high){
			high = nk;
			ans = x;
		}
	}
	if(high==0) return "0";
	return ans;
}
int32_t main()
{
    IOS
    cout<<solve()<<endl;
}

// Problem : B. Maximum Product
// Contest : Codeforces - Codeforces Round #670 (Div. 2)
// URL : https://codeforces.com/contest/1406/problem/B
// Memory Limit : 512 MB
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
#define SIZE (ll)(1e6)
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
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void solve(){
	ull n;cin>>n; vi a(n); input(a); sort(a);
	ll pdt1 = a[0] * a[1] * a[n-1] * a[n-2] * a[n-3];
	ll pdt2 = a[n-1] * a[n-2] * a[n-3] * a[n-4] * a[n-5];
	 ll pdt3 = a[0] * a[1] * a[2] * a[3] *a[n-1];
	cout<<max(pdt1,max(pdt3,pdt2))<<endl;
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
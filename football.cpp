
// Problem : C. Football
// Contest : Codeforces - RCC 2014 Warmup (Div. 2)
// URL : https://codeforces.com/problemset/problem/417/C
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
#define SIZE (ll)(1e6)
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
#define val(a) (a?a:n)
void solve(){
	int n,k; sc(n); sc(k);
	if((k<<1)+1>n){
		cout<<-1; return;
	}
	printf("%d\n",n*k);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++) printf("%d %d\n",i, val((i+j)%n));
	}
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
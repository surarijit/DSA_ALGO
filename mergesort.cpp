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
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
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
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void merge(vi &a, vi &b, vi &c){
	int n = a.size(), n1 = b.size(), n2 = c.size(),i=0,j=0,k=0;
	while(i<n1 and j<n2){
		int mini = min(b[i], c[j]);
		if(mini == b[i]) a[k++]  = b[i++];
		else a[k++]  =  c[j++];
	}
	while(i<n1) a[k++]  =b[i++];
	while(j<n2) a[k++]  =c[j++];
	
}
void mergesort(vi &a){
	int n = a.size(), mid = n/2;
	if(n==1)return;
	vi b(a.begin(),a.begin()+mid);
	vi c(a.begin()+mid, a.end());
	mergesort(b);
	mergesort(c);
	merge(a,b,c);
}
void solve(){
	int n ;cin>>n; vi a(n); input(a);
	mergesort(a);
	display(a);
}
int32_t main()
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
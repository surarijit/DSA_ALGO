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
int pre[SIZE] = {0};
int N;
void update(int index, int val){
	for(int i=index;i<=N;i+= (i&-i))
	pre[i]+= val;
}
int sum(int index){
	int ans=0;
	for(int i=index;i>0;i -= (i&-i))
	ans+= pre[i];
	return ans;
}
int solve(){
	int n,k;cin>>n; vi a(n); input(a);cin>>k;
	N = maxelem(a);
	for(int i=0;i<n;i++) update(a[i],1);
	int start =1, end = N;
	while(start<=end){
		int mid = (start+end)/2;
		int x = sum(mid);
		if(x==k and find(all(a),x)!=a.end()) return mid;
		if(sum(mid-1)<k and sum(mid+1)>k ) return mid;
		if(x >k ) end = mid-1;
		else start = mid+1;
	}
	return -1;
}
int32_t main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<solve();
    }
    return 0;
}
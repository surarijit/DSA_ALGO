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
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
int func(int start, int end, int &n){
	if(start>end) return -1;
	ll mid = start+(end-start)/2, x = mid*mid;
	if(x==n) return mid;
	if(x < n && (mid+1)*(mid+1)>n) return mid;
	if(x<n) return func(mid+1,end,n);
	return func(start,mid-1,n);
}
int work(int n){
	return func(0,n,n);
}
void solve(){
	int n; cin>>n;
	cout<<work(n);
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();cout<<endl;
    }
    return 0;
}
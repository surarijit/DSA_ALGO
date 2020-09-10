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
typedef long long ll;
int bsearch(vi &a, int &x, int start, int end){
	if(start>end) return -1;
	int mid = (start+end)/2;
	if(a[mid]==x) return mid;
	if(start==end) return -1;
	if(a[start]<=a[mid]){
		if(x<=a[mid] && x>=a[start]) return bsearch(a,x,start,mid-1);
		return bsearch(a,x,mid+1,end);
	}
	if(x>=a[mid] && x<=a[end]) return bsearch(a,x,mid+1,end);
	return bsearch(a,x,start,mid-1);
}
int work(vi &a, int &x){
	return bsearch(a,x,0,a.size()-1);
}
void solve(){
int n,x; cin>>n; vi a(n); input(a);cin>>x;
	cout<<work(a,x)<<endl;;
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








































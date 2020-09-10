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
#define input(a) {for(int i1=0;i1<n;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int bsearchleft(vi &a, int &x, int start, int end){
	if(start>end) return -1;
	int mid = (start+end)/2; 
if(a[start]>x || a[end]<x) return -1;
	if((mid==0 ||a[mid-1]!=x) && a[mid]==x) return mid;
	if(a[mid]>=x) return bsearchleft(a,x,start,mid);
	if(a[mid]<x) return bsearchleft(a,x,mid+1,end);
	return -1;
}
int bsearchright(vi &a, int &x, int start, int end){
	if(start>end) return -1;
	if(a[start]>x || a[end]<x) return -1;
	int mid = (start+end)/2; 
	if(a[mid]==x){
		if(mid==end || a[mid+1] != x) return mid;
		return bsearchright(a,x,mid+1,end);
	}
	if(a[mid]>x) return bsearchright(a,x,start,mid-1);
	if(a[mid]<x)return bsearchright(a,x,mid+1,end);
	return -1;	
}
int work(vi &a, int x){
	int g = bsearchleft(a,x,0,a.size()-1);
	int h = bsearchright(a,x,0,a.size()-1);
	//cout<<h<<" "<<g<<endl;
	if(h!=-1) return h-g+1;
	return 0;
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
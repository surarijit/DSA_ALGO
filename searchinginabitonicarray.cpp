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
int greatest(vi &a, int start, int end){
	if(start>end) return -1;
	int mid = (start+end)/2;
	if(a[mid] >a[mid-1] && a[mid]>a[mid+1]) return mid;
	if(mid> start && a[mid] > a[mid-1]) return greatest(a,mid,end);
	return greatest(a,start,mid);
}
int bsearch(vi &a, int start, int end,int x){
	if(start>end) return -1;
	int mid = (start+end)/2;
	if(a[mid]==x) return mid;
	if(a[mid]>x) return bsearch(a,start,mid-1,x);
	return bsearch(a,mid+1,end,x);
}
int bsearch2(vi &a, int start, int end, int x){
	if(start>end) return -1;
	int mid = (start+end)/2;
	if(a[mid]==x) return mid;
	if(a[mid]<x) return bsearch2(a,start,mid-1,x);
	return bsearch2(a,mid+1,end,x);
}
int work(vi &a, int x){
	int g = greatest(a,0,a.size()-1); //cout<<a[g]<<endl;
	int b = bsearch(a,0,g,x); 
	if(b==-1) b = bsearch2(a,g,a.size()-1,x);
	return b;
}
void solve(){
	int x,n; cin>>n; vi a(n); input(a);cin>>x;
	cout<<work(a,x);
	
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
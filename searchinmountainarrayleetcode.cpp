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
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
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
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
#define Mountain MountainArray
#define va(x) (v[x]==-1?a.get(x):v[x])
class Mountain{
	vi v;
	public :
	Mountain(int n){
		v.resize(n);
		input(v);
	}
	int get(int idx){
		return idx<v.size()? v[idx]:-1;
	}
	int length(){return v.size();}
};

int findInMountainArray(int target, MountainArray &a) {
      int l = a.length(),high=0,pos=0; vi v(l,-1);
      {
      	int start=0, end=l-1;
      	while(start<=end){
      		int mid = (start+end)/2;
      		v[mid] = va(mid);
      	 	if(high<va(mid)) pos = mid;
      		high = max(high,va(mid));
      		
      		if(mid!=start)	
      		v[mid-1] = va(mid-1);
      		if(mid!=start and va(mid)> va(mid-1)) start = mid+1;
      		else end = mid-1;
      	}
      }
      {
      	int start=0,end =pos;
      	while(start<=end){
      		int mid = (start+end)/2;
      		v[mid] = va(mid);
      		if(va(mid)==target) return mid;
      		if(va(mid)>target) end=mid-1;
      		else start = mid+1;
      	}
      }
      {
      	int start=pos+1,end=l-1;
      	while(start<=end){
      		int mid = (start+end)/2;
      		v[mid] = va(mid);
      		if(va(mid)==target) return mid;
      		if(va(mid) < target) end = mid-1;
      		else start = mid+1;
      	}
      }
      return -1;
      
}
void solve(){
	int n,target;cin>>n>>target;
	Mountain ob(n);
	cout<<findInMountainArray(target,ob);
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
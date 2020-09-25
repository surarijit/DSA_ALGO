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
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
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

#define vi vector<int>
#define all(a) a.begin(),a.end()
bool asc(vi a){
	for(int i=1;i<a.size();i++){
		if(a[i]<a[i-1]) return 0;
	}
	return 1;
}
int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size(),ans=n;
		if(asc(arr)) return 0;
        for(int i=0;i<n;i++){
        	for(int j=i;j<n;j++){
        		vi b(arr.begin(),arr.begin()+i); 
				b.insert(b.end(),arr.begin()+j+1,arr.end());
        		if(asc(b)) {
				ans = min(ans,j-i+1);}
        	}
        }
	return ans;
}

void solve(){
	int n; cin>>n; vi a(n); input(a); 
	cout<<findLengthOfShortestSubarray(a);
}
int main()
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
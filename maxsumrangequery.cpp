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
#define ll long long int
#define ull unsigned ll
using namespace std;
int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
 	sort(nums); int n=nums.size(),sum1=0,sum2=0; vi prefix(n,0);
 	for(int i=0;i<n;i++){
 		prefix[i] = nums[i];
 		if(i)prefix[i] += prefix[i-1];
 	}       
 	for(auto x : requests){
 		sum1 += prefix[x[1]] - (x[0]?prefix[x[0]-1]:0);
 	}
	reverse(nums);
	for(int i=0;i<n;i++){
 		prefix[i] = nums[i];
 		if(i)prefix[i] += prefix[i-1];
 	} 
	for(auto x : requests){
 		sum2 += prefix[x[1]] - (x[0]?prefix[x[0]-1]:0);
 	}
	return max(sum1,sum2);
}
void solve(){
	int n; cin>>n; vi a(n); input(a);
	
	cout<<maxSumRangeQuery(a);
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
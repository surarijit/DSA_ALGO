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
#define ull unsigned ll
using namespace std;

#define ll long long int
 int minSubarray(vector<int>& nums, int p) {
        ll n = nums.size(),prefix[n]; int ans =n;
        for(int i=0;i<n;i++){
        	prefix[i] = nums[i];
        	if(i) prefix[i] += prefix[i-1];
        }
		ll sum = prefix[n-1];
		if(sum%p==0) return 0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(i==0 && j==n-1) continue;
				if((sum - (prefix[j] - (i?prefix[i-1]:0)))%p==0) 
				{
					ans = min(ans,j-i+1);
					break;
				}
			}
		}
	return ans == n ?-1 : ans;
    }
void solve(){
	int n; cin>>n; vi a(n);input(a); int p; cin>>p;
	cout<<minSubarray(a,p);
	
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
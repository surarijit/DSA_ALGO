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
 int pre[SIZE]={0};
    int N;
    void update(int idx, int val){
        for(int i=idx;i<=N;i+= (i&-i)) pre[i]+= val;
    }
    int sum(int idx){
        int ans=0;
        for(int i=idx;i>0;i-=(i&-i)) ans+= pre[i];
        return ans;
    }
int query(int l, int r) {return sum(r)-sum(l);}
    int reversePairs(vector<int>& nums) {
       int ans=0;
       if(nums.empty()) return 0;
       int mini = minelem(nums);
       for(int i=0;i<nums.size() and mini<=0 ;i++) nums[i] += abs(mini)+1;
       N = maxelem(nums);
       update(nums[0],1);
       for(int i=01;i<nums.size();i++){
       	ans += query(min(N,2*nums[i]),N);
       	update(nums[i],1);
       }
       return ans;
    }
void solve(){
	int n;cin>>n; vi a(n);input(a);
	cout<<reversePairs(a);
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
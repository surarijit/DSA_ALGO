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
vector<vector<int>> ans;
    void work(int i, int target, vector<int> &a, vector<int> v){
        if(i==a.size() and target==0 && !v.empty()) {ans.pb(v); return;}
        if(target<0 || i>=a.size())return;
        work(i+1,target,a,v);
        v.pb(a[i]); work(i,target-a[i],a,v);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        sort(a); ans.clear();
        vector<int> v;
        work(0,target,a,v);
        return ans;
    }
void solve(){
	int n,target;cin>>n>>target; vi a(n); input(a);
	vector<vi> ans = combinationSum(a,target);
	for(vi x:ans) display(x);
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
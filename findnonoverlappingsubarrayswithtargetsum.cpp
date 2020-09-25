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
vi help(vi a, int &k){
	unordered_map<int,int> ma; int n=a.size(),ans=n,sum=0; vi v(n,n+1);
	for(int i=0;i<n;i++){
		sum+= a[i];
		ma[sum] = i+1;
		if(sum==k) ans = min(ans,i+1);
		if(sum-k>=0 and ma.find(sum-k)!=ma.end()) ans = min(ans,ma[sum]-ma[sum-k]);
		v[i] = ans;
	}
	//cout<<ans<<endl;
	return v;
}
int minSumOfLengths(vector<int>& a, int target) {
        vi prefix = help(a,target);reverse(a); vi suffix = help(a,target); reverse(suffix);
        int n=a.size(),ans = n+1;
        for(int i=1;i<n;i++)
        ans = min(ans,prefix[i-1]+suffix[i]);
        return ans>n?-1:ans;
}
void solve(){
	int n,target; cin>>n; vi a(n); input(a); cin>>target;
	cout<<minSumOfLengths(a,target);
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
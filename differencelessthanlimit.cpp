/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<set>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define reset(a,n,val) a.clear(),a.resize(n,val)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
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
#define display(a) {for(auto x:a) cout<<x<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
 int longestSubarray(vector<int>& a, int limit) {
	        multiset<int> s;
	       
	         int ans=1,n=a.size(),start=0;
	        for(int i=0;i<n;i++){
	            s.insert(a[i]);
	       // cout<<*s.begin()<<" "<<*s1.begin()<<endl;
	           while(start<i and abs(*s.begin() - *(--s.end())) > limit) 
	           {
	           	
	           	s.erase(s.find(a[start])); start+=1;
	           }
	         //  if(s.size()==7) {display(s); }
	           ans = max(ans,s.size());
	        }
	        return ans;
    }
void solve(){
	int n;cin>>n; vi a(n); input(a); int limit;cin>>limit;
	cout<<longestSubarray(a,limit);
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
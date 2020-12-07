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
void update(int idx,int val){
	for(int i=idx;i<=N;i+= (i&-i)) pre[i]+=val;
}
int sum(int idx){
	int ans=0;
	for(int i=idx;i>0;i-=(i&-i)) ans+= pre[i];
	return ans;
}
int createSortedArray(vector<int>& ins) {
		N = maxelem(ins);int cost=0;
		for(int i=0;i<ins.size();i++){
			int less = sum(ins[i]-1), more = sum(N)- sum(ins[i]);
			cost += min(less,more);//cout<<min(less,more)<<endl;
			update(ins[i],1);
		}
        return cost;
    }
void solve(){
	int n;cin>>n; vi ins(n); input(ins);
	cout<<createSortedArray(ins);
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
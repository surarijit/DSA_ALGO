/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<algorithm>
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
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(pi x:a) cout<<x.F<<" "<<x.S<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
bool static compare(pi a, pi b){
	if(a.F==b.F){
		return a.S>b.S;
	}
	return a.F<b.F;
}
int work(int n, vector<int>& ranges){
	vi jump(n+1),dp=jump;
	for(int i=0;i<ranges.size();i++){
		int l = max(0,i-ranges[i]), r = min(n,i+ranges[i]);
		jump[l] = r-l;
	}
	for(int i=n;i>=0;i--){
		for()
	}
	
}
int minTaps(int n, vector<int>& ranges) {
        vector<pi> a,v;
        for(int i=0;i<ranges.size();i++){
        	int left = max(i-ranges[i],0), right = min(i+ranges[i],n);
        	a.pb({left,right});
        }
        sort(all(a),compare);
        //display(a);cout<<endl;
        int prevEnd=0,maxEnd=0,i=0,cnt=0;
        while(i<n and prevEnd<n){
        	while(i<n and a[i].F<= prevEnd){
        		maxEnd = max(maxEnd, a[i].S);
        		i+=1;
        	}
        	if(prevEnd == maxEnd) return -1;
        	cnt+=1;
        	prevEnd=maxEnd;
        }
        return cnt;
}
void solve(){
	int n;cin>>n; vi ranges(n+1); input(ranges);
	cout<<minTaps(n,ranges);
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
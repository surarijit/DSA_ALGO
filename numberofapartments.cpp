
// Problem : A. Number of Apartments
// Contest : Codeforces - Educational Codeforces Round 96 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1430/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e3+10)
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
pi dp[SIZE];
vi visited(SIZE,0);
void pre(){
	pqq<vi,vector<vi>, greater<vi>> q;
	q.push({0,0,0,0});
	while(!q.empty()){
		vi v = q.top(); q.pop();
		int a=v[1],b=v[2],c=v[3];
		if(v[0]>SIZE or visited[v[0]]) continue;
		dp[v[0]] = {a,b}; visited[v[0]]=1;
		q.push({v[0]+3,a+1,b,c});
		q.push({v[0]+5,a,b+1,c});
		q.push({v[0]+7,a,b,c+1});
	}
}
void solve(){
	int n;cin>>n; 
	if(visited[n]){pi v = dp[n];
	//cout<<v.first<<" "<<v.second<<endl;
	cout<<v.first<<" "<<v.second<<" "<<(n-3*v.first-5*v.second)/7;}
	else cout<<"-1";
	cout<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    pre();
    while(t--){
    	solve();
    }
    return 0;
}
/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
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

#define SIZE 210
#define mod (int)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define work countRoutes
int dp[SIZE-100][SIZE]={{0}};
int countRoutes(vector<int>& a, int start, int finish, int fuel) {
	if(!dp[start][fuel]){
	 dp[start][fuel] = 1+(start==finish);
	for(int i=0;i<a.size();i++){
		if(i!=start && fuel - abs(a[i]-a[start])>=0)
		 dp[start][fuel] =va( dp[start][fuel] + work(a,i,finish, fuel -abs(a[i]-a[start])));
	}
	 }
	 return dp[start][fuel]-1;
}

void solve(){
	int n;cin>>n; vi a(n); input(a); int start,finish,fuel;
	cin>>start>>finish>>fuel;
	cout<<countRoutes(a,start,finish,fuel);
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
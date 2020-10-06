/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
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

#define check(i,j) ((i>=0 && j>=0 && i<n && j<n)?1:0)
int ans=INT_MAX,n;
int calc(vector<vi> a){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=-1) continue;
			cnt+=1;
			if(check(i+1,j) and a[i+1][j]==1) a[i+1][j]=0;
			if(check(i-1,j) and a[i-1][j]==1) a[i-1][j] = 0;
			if(check(i,j-1) and a[i][j-1]==1) a[i][j-1]=0;
			if(check(i,j+1) and a[i][j+1]==1) a[i][j+1]=0;
		}
	}
	for(int i=0;i<n;i++) if(maxelem(a[i])==1) return INT_MAX;
	return cnt;
}
void help(int x,int y, vector<vi> &a){
	int i=x,j=y, g= a[i][j];
     x += 1;  
     if(x==n) {x=0,y+=1;}
     if(y==n) {ans = min(ans,calc(a));return;}
     help(x,y,a);
     a[i][j]=-1;help(x,y,a);
     a[i][j]=g;	
}

void solve(){
	cin>>n; vector<vi> a(n, vi (n,0));
	for(int i=0;i<n;i++)input(a[i]);
	help(0,0,a);
	cout<<ans<<endl;
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
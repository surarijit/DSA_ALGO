/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<cstring>
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
#define check(a,b) ((a>=0 && b>=0 && a<N && b<N)?1:0)
#define SIZE 100
double dp[SIZE][SIZE][SIZE]; bool visited[SIZE][SIZE][SIZE];
double work(int N,int start_x, int start_y, int steps){
	if(!check(start_x,start_y)) return 0.0;
	if(steps==0) return 1.0;
	if(visited[start_x][start_y][steps]) return dp[start_x][start_y][steps];
	double ans=0;
	for(int i=-2;i<=2;i++){
		for(int j=-2;j<=2;j++){
			if(abs(i)!=abs(j) and i and j){
				ans += work(N,start_x+i,start_y+j,steps-1)/8.0;
			}
		}
	}
	visited[start_x][start_y][steps]=1;
	return dp[start_x][start_y][steps]=ans;
}
double findProb(int N,int start_x, int start_y, int steps)
{
	memset(visited,0,sizeof(visited));
	return work( N, start_x,  start_y, steps);
}
void solve(){
	int n,startx,starty,steps;
	cin>>n>>startx>>starty>>steps;
	cout<<findProb(n,startx,starty,steps);
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
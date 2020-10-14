
// Problem : B. Fox And Two Dots
// Contest : Codeforces - Codeforces Round #290 (Div. 2)
// URL : https://codeforces.com/problemset/problem/510/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
#define check(i,j) ((i>=0 and j>=0 and i<n and j<m )?1:0)
int n,m;
bool work(int x, int y, vector<string> &s, int steps, vector<vi> &visited, int &a, int &b){
	if(x==a and b==y and visited[a][b]) return steps>=4;
	if(!check(x,y) or visited[x][y] or s[x][y]!=s[a][b]) return 0;
	visited[x][y] = 1;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(abs(i) != abs(j) and work(x+i,y+j,s,steps+1,visited,a,b)) return 1;
		}
	}
	visited[x][y]=0;
	return 0;
}
bool solve(){
	cin>>n>>m;
	vector<string> s(n); input(s);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			vector<vi> visited(n, vi (m,0));
			if(work(i,j,s,0,visited,i,j)) return 1;
		}
	
	return 0;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cout<<(solve()?"Yes\n":"No\n");
    }
    return 0;
}
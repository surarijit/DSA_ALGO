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
#include<queue>
#include<map>
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
int solve(){
	int m,n,d,steps=0;cin>>n>>m>>d;
	queue<pi> q; q.push({0,0}); 
	map<pi,bool> visited;
	while(!q.empty()){
		int c= q.size();
		while(c--){
		 int a = q.front().first, b= q.front().second; q.pop();
		  if(a==d || b==d) return steps;
		  if(visited[{a,b}]) continue;
		  visited[{a,b}] =1;
		  q.push({m,b}); q.push({a,n});
		  if(a==m) q.push({0,b});
		  if(b==n) q.push({a,0});
		 
		 q.push({0,max(b+a,n)}); q.push({max(a+b,m),0});
		}
		steps+=1;
	}
	return -1;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cout<<solve()<<endl;
    }
    return 0;
}
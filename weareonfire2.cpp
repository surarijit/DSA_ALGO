
// Problem : We Are On Fire
// Contest : HackerEarth - Algorithms - Graphs - Breadth First Search
// URL : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/we-are-on-fire/description/
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
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int n = a.size();for(int i1=0;i1<n;i1++)scanf("%d",&a[i1]);}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define check(i,j) ((i>=0 && j>=0 && i<n && j<m)?1:0)
#define val(i,j) ((check(i,j) && a[i][j])?1:0)
using namespace std;
typedef long long ll;
int burn(int x, int y, vector<vector<int>> &a, int &n, int &m){
	a[x][y] = 0; int cnt= 1;
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(abs(i)!=abs(j) && val(x+i,y+j)){
					 cnt+= burn(x+i,j+y,a,n,m);
				}
			}
		}
		return cnt;
}
void solve(){
int n,m,q;
scanf("%d%d%d",&n,&m,&q);
vector<vector<int>> a(n, vector<int> (m,0));
for(int i=0;i<n;i++) input(a[i]);
int cnt=0;
for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(a[i][j]) cnt+=1;
while(q--){
	int x,y;
	scanf("%d%d",&x,&y);x-=1;y-=1;
	if(a[x][y]){
		cnt-=burn(x,y,a,n,m);
		
		}
	printf("%d\n",cnt);
	}
	return;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
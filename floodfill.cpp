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
#define check(i,j) ((i>=0 && j>=0 && i<n && j<m && !visited[i][j]) ?1:0)
    #define ff q.front().first
    #define fs q.front().second
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size(), m = image[0].size();
        int xc = image[sr][sc]; bool visited[n+1][m+1] ={{0}};
        queue<pi> q; q.push({sr,sc});
        while(!q.empty()){
            if(visited[ff][fs]) continue;
            visited[ff][fs] = 1;
            image[ff][fs] = color;
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int x = ff+i, y = fs+j;
                    if(check(x,y)  && image[x][y] == color){
                        q.push({x,y}); visited[x][y]=1;
                    }
                }
            }
            q.pop();
        }
        return image;
    }
void solve(){
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
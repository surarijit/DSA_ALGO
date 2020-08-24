/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pi pair<int,int>
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ff q.front().first
#define fs q.front().second
#define check(i,j) (i>=0 && j>=0 && i<h && j<w)
typedef long long ll;
int work(int i, int j, vector<vector<int>> &cango, vector<vector<bool>> &visited,int &h, int &w){
    if(cango[i][j]==1) return 0;
    visited[i][j] = 1;
    int ans = INF;
    for(int x=i-2;x<=i+2;x++){
        for(int y = j-2;y<=j+2;y++){
            if(check(x,y) && cango[x][y]==1) return 1;
            if(check(x,y) && !visited[x][y])
            {
                int gf = work(x,y,cango,visited,h,w);   
                if(gf!=-1)
                ans = min(ans,gf);
            }
        }
    }
    if(ans==INF) return -1;
    return 1+ans;
}
int solve(){
	int h,ch,cw,dh,dw,w;
    cin>>h>>w>>ch>>cw>>dh>>dw;
    ch-=1; cw-=1; dh-=1; dw-=1;
    vector<vector<char>> a(h,vector<char> (w));
    vector<vector<int>> cango(h,vector<int> (w,-1));
    vector<vector<bool>> visited(h,vector<bool> (w,0));
    for(int i=0;i<a.size();i++) {
        input(a[i]);
    }
    queue<pi> q;
    q.push({dh,dw});
    while(!q.empty()){
        if(a[ff][fs]=='.') cango[ff][fs] = 1;
        else cango[ff][fs] = 0;
        if(cango[ff][fs]){
        if(check(ff+1,fs) && cango[ff+1][fs]==-1) q.push({ff+1,fs});
        if(check(ff-1,fs) && cango[ff-1][fs]==-1) q.push({ff-1,fs});
        if(check(ff,fs+1) && cango[ff][fs+1]==-1) q.push({ff,fs+1});
        if(check(ff,fs-1) && cango[ff][fs-1]==-1) q.push({ff,fs-1});
    }
        q.pop();
    }
    for(int i=0;i<cango.size();i++) display(cango[i]);
    return work(ch,cw,cango,visited,h,w);
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	printf("%d\n",solve());
    }
    return 0;
}
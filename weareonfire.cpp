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
#define pb push_back
#define pi pair<int,int>
#define ff q.front().first
#define fs q.front().second
#define value(i,j) (check(i,j) && a[i][j])
#define check(i,j) (i>=0 && j>=0 && i<n && j<m)
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
     int n,m,x,y,cnt=0;
     ll test;
     cin>>n>>m>>test;
     scanf("%d",&n);
     scanf("%d",&m);
     scanf("%lld",&test);
     bool a[n][m];
     for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++) {
            int ih;
            scanf("%d",&ih);
            a[i][j] = (ih?1:0);
        }
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++) 
         if(a[i][j]) cnt+=1;
     }

             queue<pi> q;
     while(test--){
         cin>>x>>y; 
         x-=1; y-=1;
         if(a[x][y]){
             q.push({x,y});
             while(!q.empty()){
                 cnt-=1;
                 a[ff][fs] = 0;
                 if(value(ff,fs+1)) q.push({ff,fs+1});
                 if(value(ff,fs-1)) q.push({ff,fs-1});
                 if(value(ff-1,fs)) q.push({ff-1,fs});
                 if(value(ff+1,fs)) q.push({ff+1,fs});
                 q.pop();
             }
         }
         printf("%d\n",cnt);
     }
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
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
#define mod (ll)(1e5)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int solve(){
    int n,S,time=0;
    cin>>n>>S;
    vector<int> a(n); bool visited[SIZE];
    memset(visited,-1,sizeof(visited));
    for(int i=0;i<n;i++) cin>>a[i];
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        int c = q.size();
        while(c--){
            int temp = q.front();q.pop();
            if(temp==S) return time;
            for(int i=0;i<n;i++){
                int x = (temp * a[i])%mod;
                if(x == S) return time+1;
                if(visited[x]==-1)
                q.push(x);
            }
        }
        time += 1;
    }
    return -1;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}
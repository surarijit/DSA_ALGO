/*
    ARIJIT SUR 
    @duke_knight
    @surcode
    @comeback
    IIT ISM 
 */
#include<bits/stdc++.h>

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
#define edge(a,b) adj[a].pb(b)
#define SIZE (ll)(1e6)
vi adj[SIZE];
ll help(int s, int p, int level, int &B, vi adj[]){
    if(level==B) return 0;
    ll cnt=1;
    for(auto i:adj[s]){
        if(i!=p) cnt+= help(i,s,level+1,B,adj);
    }
    return cnt;
}
ll exponentMod(ll A, ll B, ll C=mod)  
{  
    // Base cases  
    if (A == 0)  
        return 0;  
    if (B == 0)  
        return 1;  
  
    ll y;  
    if (B % 2 == 0) {  
        y = exponentMod(A, B / 2, C);  
        y = (y * y) % C;  
    }  
  
    else {  
        y = A % C;  
        y = (y * exponentMod(A, B - 1, C) % C) % C;  
    }  
  
    return (int)((y + C) % C);  
}  
ll power(ll a, ll b){
    ll result = 1;
    while(b){
        if(b&1) result = (result*a)%mod;
        a = (a*a)%mod;
        b/=2;
    }
    return result;
}
int solve(vector<vi> &A, int B){
    int n = A.size()+1;
    for(auto i:A){
        edge(i[0],i[1]); edge(i[1],i[0]);
    }
    ll cnt = help(1,-1,0,B,adj);
    return (int)power(2,cnt);
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
       // solve();
    }
    return 0;
}

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
#define edge(a,b,c) adj[a].push_back({b,c})
using namespace std;
int work(int u, vector<pi> adj[],vi &A, vi &visited){
    int cost = A[u];
    visited[u] = 1;
    for(pi i: adj[u]){
        if(!visited[i.first])
       visited[i.first]=1,cost =  min(cost, work(i.first,adj,A,visited)+2*i.second);
    }
    return cost;
}
vector<int> Solution(vector<int> &A, vector<vector<int> > &B) {
    int n = A.size(),m=B.size();
    vector<pi> adj[n]; vi ans(n),visited(n,0);
    for(vi x:B){
        x[0]-=1; x[1]-=1;
        edge(x[0],x[1],x[2]);
        edge(x[1],x[0],x[2]);
    }
    for(int i=0;i<n;i++){
        vi visited(n,0);
        ans[i] = work(i,adj,A,visited);
    }
    return ans;
}
void solve(){
	int n; 
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


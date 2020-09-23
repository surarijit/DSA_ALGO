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
#define dist(a,b) (abs(a[0]-b[0])+abs(a[1]-b[1]))
int parent[SIZE],s[SIZE];
void initial(int n){
	for(int i=0;i<=n;i++) parent[i]=i,s[i]=1;
}
int find_parent(int v){
	return v==parent[v]?v:parent[v]=find_parent(parent[v]);
}
void make_union(int a, int b){
    parent[b] = a;
}
int minCostConnectPoints(vector<vector<int>>& points) {
		priority_queue<vi,vector<vi>,greater<vi>> v;
        int cost=0,n=points.size(),cnt=0; initial(n+1);
        for(int i=0;i<n;i++){
        	for(int j=i+1;j<n;j++) v.push({dist(points[i],points[j]),i,j});
        }
        
        while(!v.empty()){
           vi a = v.top(); v.pop();
            if(cnt==n-1) break;
        	int x = find_parent(a[1]), y= find_parent(a[2]);
        	if(x!=y) {
        		parent[y] = x;
        		cost+= a[0];
                cnt+=1;
        	}
        }
        return cost;
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
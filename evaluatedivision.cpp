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
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;

#define pi pair<double,int>
vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        map<string,int> ma;int k=1; vector<double> v;
        vector<pi> adj[SIZE];
        for(int i=0;i<equations.size();i++){
        	string a = equations[i][0], b = equations[i][1];
        	ma[a] = (ma[a]?ma[a]:k++); ma[b] = (ma[b]?ma[b]:k++);
        	adj[ma[a]].pb({values[i],ma[b]});
        	adj[ma[b]].pb({1.0/values[i],ma[a]});
        }
        for(auto q:queries){
        	int a = ma[q[0]],b=ma[q[1]];
        	if(a==0 || b==0) {
        		v.pb(-1); continue;
        	}
        	if(a==b){
        		v.pb(1.0); continue;
        	}
        	queue<pi> pq; bool visited[k+1]={0};
        	for(pi x:adj[a]) pq.push(x);
        	while(!pq.empty()){
        		double g = pq.front().first; int u = pq.front().second; pq.pop();
        		if(visited[u]) continue;
        		visited[u]=1;
        		if(u==b) {
        			v.pb(g); break;
        		}
        		for(pi x:adj[u]){
        			int v=x.second; double ff = g*x.first;
        			pq.push({ff,v});
        		}
        	}
        	
        }
        return v;
		
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
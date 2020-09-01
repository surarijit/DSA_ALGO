/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define ff q.front().first
#define fs q.front().second

int black(vector<string> &s) {
	int n = s.size(),m = s[0].size(),cnt=0;
	vector<vector<bool>> a(n,vector<bool> (m,0));
	queue<pi> q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j] = (s[i][j] == 'X');
		}
		//display(a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]){
				q.push({i,j}); cnt+=1;
				while(!q.empty()){
					a[ff][fs] = 0;
					if(ff && a[ff-1][fs]) {q.push({ff-1,fs}); a[ff-1][fs] =0;}
					if(ff+1<n && a[ff+1][fs]){ q.push({ff+1,fs}); a[ff+1][fs] = 0;}
					if(fs && a[ff][fs-1]) {q.push({ff,fs-1}); a[ff][fs-1] = 0;}
					if(fs+1<m && a[ff][fs+1]){q.push({ff,fs+1}); a[ff][fs+1] = 0;}
					q.pop();
				}
			}
		}
	}
    return cnt;
}
void solve(){
	int N;cin>>N;
	vector<string> s(N); input(s);
	printf("%d\n",black(s));
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

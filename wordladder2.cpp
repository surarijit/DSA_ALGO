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
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<string,vector<string>>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int y = a.size();for(int i1=0;i1<y;i1++) cin>>a[i1];}
#define display(a) {int y = a.size();for(int i1=0;i1<y;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
map<string,bool> ma;
bool onediff(string a, string b){
	int flag=0;
	for(int i=0;i<a.size();i++) {
		if(a[i]!=b[i]) flag+=1;
		if(flag>1) return 0;
	}
	return 1;
}
bool isthere(string s, vector<string> a){
	for(int i=0;i<a.size();i++){
		if(a[i]==s) return 1;
	}
	return 0;
}
void work(queue<pi> &q, pi u){
	string s = u.first; vector<string> a = u.second;
	for(int i=0;i<s.size();i++){
		for(char ch = 'a' ; ch<='z'; ch++){
			if(s[i]!=ch){
				string s1 = s; s1[i] = ch;
				if(ma[s1] && !isthere(s1,a)){
					a.pb(s1);
					q.push({s1,a});
					a.pop_back(); 
				}
			}
		}
	}
}
vector<vector<string> > findLadders(string start, string end, vector<string> &dict)
{
	 int n=dict.size(); vector<string> ans; vector<vector<string>> v; sort(dict);
	queue<pi> q; ma.clear(); ans.pb(start);
	for(int i =0;i<n;i++) ma[dict[i]] =1;
	q.push({start,ans}); int step = 0,minstep = INF;
	while(!q.empty() && minstep == INF){
		int c = q.size();
		while(c--){
			pi u = q.front(); q.pop();
			if(u.second.size() > dict.size()+2) continue;
			if(u.first==end){
				v.pb(u.second);
				return v;
			}
			if(onediff(u.first,end)){
				minstep = min(step,minstep);
				u.second.pb(end);v.pb(u.second); continue;
			}
			work(q,u);
		}
	}
	return v;
}
void solve(){
	int n;
	string start,end; cin>>start>>end>>n;
	vector<string> dict(n); input(dict); 	
	vector<vector<string>> ans = findLadders(start,end,dict);
	for(int i=0;i<ans.size();i++) display(ans[i]);
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

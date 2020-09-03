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
#define display(a) {int n = a.size(); for(int i1=0;i1<n;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
bool diff(int n){ 
	vector<int> a;int k=0;
	while(n>0){
		a.pb(n%10);
		n=n/10;
	}

	for(int i=0;i+1<a.size();i++){
		if(abs(a[i]-a[i+1]) !=1) return 0;
	}
	return 1;
}
vector<int> stepnum(int a,int b){
	vector<int> ans;
	for(int i=a;i<=b;i++){
		if(diff(i)) ans.pb(i);
	}
	return ans;
}
void solve(){
	int a,b; 
	cin>>a>>b;
	display(stepnum(a,b));
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

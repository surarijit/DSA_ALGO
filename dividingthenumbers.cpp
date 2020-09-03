
// Problem : C. Dividing the numbers
// Contest : Codeforces - Codeforces Round #452 (Div. 2)
// URL : https://codeforces.com/problemset/problem/899/C
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {ll x = a.size();for(ll i1=0;i1<x;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
ll sum(vector<ll> a){
	ll s=0,n=a.size();
	for(ll i=0;i<n;i++) s+=a[i];
	return s;
}
void solve(){
	ll n;cin>>n;
		vector<ll> a,b;
	if(n==2){
		cout<<"1\n1 1\n";return;
	}
	
	if(n&1){
		vector<ll> b1;
		for(ll i=1;i<=n;i++){
			if(i&1) a.pb(i);
			else b1.pb(i);
		}
		if(a.size()==b1.size()) b=b1;
		else{
			b.pb(0);
			for(int i=0;i<b1.size();i++) b.pb(b1[i]);

		}
		for(int i=0;i<a.size();i++){
			if(i&1) swap(a[i],b[i]);
		}
		
	}
	else
	{
		ll i=1,j=n;
		while(i<j){
			if(i&1) {
				a.pb(i); a.pb(j); i+=1; j-=1;
			}
			else{
				b.pb(i); b.pb(j); i+=1;j-=1;
			}
		}
		if((n/2)&1){
			b.pb(a[a.size()-1]); a.pop_back();
		}
	}
	cout<<abs(sum(a)-sum(b))<<endl<<a.size()<<endl;
		display(a); return;
}
int main()
{
    IOS
    int t=1;
    while(t--){
    	solve();
    }
    return 0;
}


// Problem : C. Yet Another Array Restoration
// Contest : Codeforces - Codeforces Round #667 (Div. 3)
// URL : https://codeforces.com/contest/1409/problem/C
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
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	for(int i=1;i<=y-x;i++){
		if((y-x)%i==0){
			int n1=n;
			while(n1>0){
				int a = y-(n1-1)*i;
				n1-=1;
				if(a>0 && a<=x){
					while(n--){
						cout<<a<<" ";
						a+=i;
					}
					cout<<endl;
					return;
				}
				
			}
		}
	}
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}

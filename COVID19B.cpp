
// Problem : Coronavirus Spread 2
// Contest : CodeChef - September Challenge 2020 Division 2
// URL : https://www.codechef.com/SEPT20B/problems/COVID19B
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
#define input(a) {for(int i1=0;i1<n;i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<n;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n;cin>>n;
	vector<int> a(n),count(n,1); input(a);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) count[i] +=1;
		}
		for(int j=0;j<i;j++)
			if(a[j]>a[i]) count[i] +=1;
	}
	printf("%d %d\n",minelem(count), maxelem(count));
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


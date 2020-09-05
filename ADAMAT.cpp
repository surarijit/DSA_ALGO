
// Problem : Ada Matrix
// Contest : CodeChef - September Challenge 2020 Division 2
// URL : https://www.codechef.com/SEPT20B/problems/ADAMAT
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
	int n=4; 
	 cin>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	int k=n,cnt=0; bool flag = 0;
	while(k!=0)
	{
		int i=k,j=1;
		if(flag) swap(a[i][j], a[j][i]);
		//cout<<a[i][j]<<" "<<a[j][i]<<endl;
		if(a[i][j]!= (i-1)*n+j) {
			flag = 1-flag;
			cnt+=1;
		}
		k-=1;
	}
	cout<<cnt<<endl;
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

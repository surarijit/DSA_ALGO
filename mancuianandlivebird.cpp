
// Problem : Mancunian And Liverbird Go Bar Hopping
// Contest : HackerEarth - Algorithms - Graphs - Graph Representation
// URL : https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/mancunian-and-liverbird-go-bar-hopping-2/description/
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int n=a.size();for(int i1=0;i1<n;i1++) cin>>a[i1];}
#define display(a) {int n =a.size();for(int i1=0;i1<n;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n;cin>>n;
	vector<int> a(n-1,0),left(n,01),right(n,01),b(n-1),left2(n,1),right2(n,1);
	input(a); bool flag = 0;
	for(int i=01;i<n;i++) if(!a[i-1]) left[i] += left[i-1];
	for(int i=n-2;i>=0;i--) if(a[i]) right[i] += right[i+1];
	for(int i=0;i<n;i++) b[i] = 1-a[i];
	for(int i=01;i<n;i++) if(!b[i-1]) left2[i] += left2[i-1];
	for(int i=n-2;i>=0;i--) if(b[i]) right2[i] += right2[i+1];
	int test=1; cin>>test;
	//display(left); display(right);
	while(test--){
		char ch;
		cin>>ch;
		if(ch=='U') flag  = 1-flag;
		else{
			int x;
			cin>>x;x-=1;
			if(flag) cout<<(left2[x]+right2[x]-1);
			else cout<<(left[x]+right[x]-1);
			cout<<endl;
			
		}
	} 
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
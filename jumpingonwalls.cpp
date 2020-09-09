
// Problem : B. Jumping on Walls
// Contest : Codeforces - Codeforces Round #125 (Div. 1)
// URL : https://codeforces.com/problemset/problem/198/B
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
#define SIZE (ll)(1e4)
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
#define input(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cin>>a[i1];}
#define display(a) {int n11 = a.size();for(int i1=0;i1<n11;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int n,k; int a[2][SIZE];
bool work(int i, bool flag){
	if(i>=n) return 1;
	if(a[flag][i]==0) return 0;
	return work(i+1,flag) || work(i+k,!flag);
}
void solve(){
	cin>>n>>k;
	string s; cin>>s;
	for(int i=0;i<s.size();i++){
		a[0][i] = (s[i]=='-'?1:0);
	}
	cin>>s;
	for(int i=0;i<s.size();i++){
		a[1][i] = (s[i]=='-'?1:0);
	}
	cout<<(work(0,0)?"YES":"NO");
}
int main()
{
    IOS
    int t=1; memset(a,1,sizeof(a));
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
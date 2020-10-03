
// Problem : A. Circle Coloring
// Contest : Codeforces - Grakn Forces 2020
// URL : https://codeforces.com/contest/1408/problem/0
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
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
bool work(int i, int &n ,vi &a, vi &b, vi &c, vi &p){
	if(i==n) {
		if(p[n-1]==p[0]) return 0;
		return 1;
	}
	if(i==0 || a[i]!=p[i-1]){
		p[i] = a[i];
		if(work(i+1,n,a,b,c,p)) return 1;
	} 
	if(i==0|| b[i]!=p[i-1]){
		p[i] = b[i];
		if(work(i+1,n,a,b,c,p)) return 1;
	}
	if(i==0 || c[i]!=p[i-1]){
		p[i] = c[i];
		if(work(i+1,n,a,b,c,p)) return 1;
	}
	return 0;
}
void solve(){
	int n;cin>>n; vi a(n),b(n),c(n),p(n); input(a); input(b); input(c);
	work(0,n,a,b,c,p);
	display(p);
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}

// Problem : A. Ice Skating
// Contest : Codeforces - Codeforces Round #134 (Div. 1)
// URL : https://codeforces.com/problemset/problem/217/A?fbclid=IwAR0IQO69e5__YRzDP1DLJ-je_2_JLDnN3hmJEHnrFmqa9sB_UUNAkQ7M028
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

#define valid(x,y) (x[0]==y[0] or x[1]==y[1])
int parent[SIZE],s[SIZE];
int findroot(int x){
	if(x==parent[x]) return x;
	return parent[x] = findroot(parent[x]);
}
void initial(int n=SIZE-1){
	for(int i = 0;i<=n;i++){
		parent[i] = i;
		s[i] = 1;
	}
}
void make_union(int a,int b){
    if (a != b) {
        if (s[a] < s[b])
            swap(a, b);
        parent[b] = a;
        s[a] += s[b];
    }
}
void solve(){
	int n,ans=0;; cin>>n; vector<vi> a(n,vi (2));
	initial(n);
	for(int i=0;i<n;i++) input(a[i]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int x = findroot(i), y = findroot(j);
			if(valid(a[i],a[j])) make_union(x,y);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int x = findroot(i), y = findroot(j);
			if(x!=y) {
				make_union(x,y);
				ans+=1;
			}
		}
	}
	cout<<ans<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
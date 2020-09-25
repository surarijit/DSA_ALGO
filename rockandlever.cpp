
// Problem : B. Rock and Lever
// Contest : Codeforces - Codeforces Round #672 (Div. 2)
// URL : https://codeforces.com/contest/1420/problem/B
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
#define vi vector<ll>
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
#define bp __builtin_popcount
using namespace std;
void solve(){
	int n;cin>>n; vi a(n); input(a); ll cnt=0; //sort(a);
	display(a);
	for(int i=0;i<n;i++) cout<<bp(a[i])<<" ";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++ )
		{
			//cout<<a[i]<<" "<<a[j]<<" "<<(a[i]&a[j])<<" "<<(a[i]^a[j])<<endl;
			if((a[i]&a[j]) >= (a[i]^a[j])) {
				//cout<<a[i]<<" "<<a[j]<<endl;cout<<bp(a[i])<<" "<<bp(a[j])<<endl;
				cnt+=1;
			}
		}
	}
	cout<<endl<<cnt<<endl;
//	cout<<endl<<endl;
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
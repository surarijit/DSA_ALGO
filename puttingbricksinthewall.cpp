
// Problem : B. Putting Bricks in the Wall
// Contest : Codeforces - Codeforces Round #676 (Div. 2)
// URL : https://codeforces.com/contest/1421/problem/B
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
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void solve(){
	int n;cin>>n;
	vector<string> s(n); input(s);
	int a = s[0][1]-'0', b = s[1][0]-'0', c  = s[n-1][n-2]-'0', d = s[n-2][n-1]-'0';
	int cnt1=0,cnt2=0;
	//11 00
	if(a!=1) cnt1+=1;
	if(b!=1) cnt1+=1;
	if(c!=0) cnt1+=1;
	if(d!=0) cnt1+=1;
	
	//00 11
	if(a==1) cnt2+=1;
	if(b==1) cnt2+=1;
	if(c==0) cnt2+=1;
	if(d==0) cnt2+=1;
	
	cout<<min(cnt1,cnt2)<<endl;
	if(cnt1<cnt2){
	 	if(a==0) cout<<"1 2\n";
	 	if(b==0) cout<<"2 1\n";
	 	if(c==1) cout<<n<<" "<<n-1<<endl;
	 	if(d==1) cout<<n-1<<" "<<n<<endl;
	}
	else{
		if(a==1) cout<<"1 2\n";
	 	if(b==1) cout<<"2 1\n";
	 	if(c==0) cout<<n<<" "<<n-1<<endl;
	 	if(d==0) cout<<n-1<<" "<<n<<endl;
	}
}
int32_t main()
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

// Problem : C. Perfect Keyboard
// Contest : Codeforces - Educational Codeforces Round 82 (Rated for Div. 2)
// URL : https://codeforces.com/problemset/problem/1303/C
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
#include<iostream>
#include<algorithm>
#define SIZE (ll)(1e2)
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
#define ispresent(a,x) find(all(a),x)!=a.end()
void solve(){
	string s,ans="";cin>>s;
	ans += s[0];int ptr = 0;
	for(int i=1;i<s.size();i++){
		if(ptr-1>=0 and ans[ptr-1]==s[i]) ptr-=1;
		else if(ptr+1<ans.size() and ans[ptr+1]==s[i]) ptr+=1;
		else if(ispresent(ans,s[i])) {cout<<"NO\n"; return;}
		else if(ptr==0) {ans = s[i]+ans;}
		else if(ptr==ans.size()-1) {ans+=s[i]; ptr+=1;}
	}
	ptr = find(all(ans),s[0])-ans.begin(); 
	for(int i=1;i<s.size();i++){
		if(ptr-1>=0 and ans[ptr-1]==s[i]) ptr-=1;
		else if(ptr+1<ans.size() and ans[ptr+1] == s[i]) ptr+=1;
		else {cout<<"NO\n"; return;}
	}
	for(char i='a'; i<='z';i++)
		if(!(ispresent(ans,i))) 
		ans += i;
	cout<<"YES\n"<<ans<<endl; return;
	
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
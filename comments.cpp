
// Problem : E. Comments
// Contest : Codeforces - Codeforces Round #387 (Div. 2)
// URL : https://codeforces.com/problemset/problem/747/E
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
#include<string>
#include<vector>
#include<unordered_map>
#include<stack>
#define SIZE (ll)(1e4)
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
	string word;cin>>word;
	int n=word.size(),level=0,i=0;
	stack<int> s;
	unordered_map<int,vector<string>>ma;
	while(i<n){
		string t="";
		while(i<n and word[i]!=',') t+= word[i++];
		i++;
		ma[level].pb(t);
		t="";
		while(i<n and word[i]!=',') t+=word[i++];
		i++;
		int x = stoi(t); level++;
		if(!s.empty()) s.top()--;
		s.push(x);
		while(!s.empty() and s.top()==0){
			level--;
			s.pop();
		}
	}
	cout<<ma.size()<<endl;
	for(int i=0;ma[i].size()>0;i++) display(ma[i]);
	
}
int32_t main()
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
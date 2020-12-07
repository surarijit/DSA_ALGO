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
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
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
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
string minRemoveToMakeValid(string str) {
      int l = str.size(),open=0,close=0;  
      stack<char> s;
      for(char ch:str){
      	if(ch=='('){
      		open+=1;
      		s.push('(');
      	}
      	else if(ch==')'){
      		if(open>close){
      			close+=1;
      			s.push(ch);
      		}
      	}
      	else s.push(ch);
      }
      string ans="";open=close=0;
      while(!s.empty()){
      	char ch = s.top(); s.pop();
      	if(ch==')') {
      		close+=1;
      		ans= ch+ans;
      	}
      	else if(ch=='('){
      		if(open<close) {
      			open+=1;
      			ans=ch+ans;
      		}
      	}
      	else ans=ch+ans;
      }
      return ans;
}
void solve(){
	string s;cin>>s;
	cout<<minRemoveToMakeValid(s);
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
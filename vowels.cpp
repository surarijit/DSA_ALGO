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
using namespace std;
typedef long long ll;

#define check(ch) ((ch=='a' || ch=='e' || ch=='i'||ch=='o'||ch=='u')?1:0)
vector<int> hasVowels(vector<string> str, vector<string> query){
	int n=str.size();
	vector<int> dp(n,0),ans;
	for(int i=0;i<n;i++){
		if(check(str[i][0]) && check(str[i][str[i].size()-1])) dp[i] +=1;
	if(i) dp[i] += dp[i-1];
	}
	for(int i1=0;i1<query.size();i1++){
		int l=0,r=0;
		string s = query[i1];
		int i=0;
		while(s[i]!='-'){
			l = l*10 + (s[i]-'0');
			i+=1;
		}
		i+=1;
		while(i<s.size()){
			r = r*10 + (s[i]-'0'); i+=1;
		}
		l-=1; r-=1;
		ans.push_back(dp[r]-(l?dp[l-1]:0));
	}
	return ans;
}

void solve(){
	int n; cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++) cin>>s[i];
	int q; cin>>q; vector<string> quer(q);
	for(int i=0;i<q;i++) cin>>quer[i];
	display(hasvowel(s,quer));
	
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
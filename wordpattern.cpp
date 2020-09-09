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
bool wordPattern(string pattern, string s) {
	int k=0; map<string,vi>  ma; map<char,vi> ma2;
	string word =""; vector<string> g;
        for(int i=0;s[i]!='\0';i++){
        	if(s[i]!=' ') word+= s[i];
        	else{
        		ma[word].pb(k++);
        		g.pb(word); word = "";
        	}
        }
        if(word.size()){
        	ma[word].pb(k++); g.pb(word);
        }
       //display(g);
        for(int i=0;pattern[i]!='\0';i++) ma2[pattern[i]].pb(i);
        if(g.size()!=pattern.size()) return 0;
        for(int i=0;i<min(g.size(),pattern.size());i++){
        	vi a = ma2[pattern[i]], b = ma[g[i]];
        	if(a!=b) return 0;
        }
        return 1;
    }
void solve(){
	string pattern = "abbc", s="";
	cin>>pattern; int n;cin>>n;
	while(n--){
		string s1; cin>>s1;
		s += s1;
		if(n) s+=' ';
	}
	cout<<wordPattern(pattern,s);
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
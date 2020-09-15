
// Problem : A. String Task
// Contest : Codeforces - Codeforces Beta Round #89 (Div. 2)
// URL : https://codeforces.com/problemset/problem/118/A
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
#define vowels(x) (check(x) || check(x-'A'+'a'))
#define check(x) ((x=='a'||x=='i'||x=='e'||x=='o'||x=='u')?1:0)
char to_lowr(char ch){
	if(ch>='A' && ch <='Z') ch = ch- 'A' + 'a';
	return ch;
}
void solve(){
	string s; cin>>s; string a="";
	for(int i=0;i<s.size();i++) s[i]=to_lowr(s[i]);
	for(int i=0;i<s.size();i++){
		if(vowels(s[i])) continue;
		cout<<"."<<s[i]; continue;
		a += '.'+ to_lowr(s[i]);
	}
	cout<<a;
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
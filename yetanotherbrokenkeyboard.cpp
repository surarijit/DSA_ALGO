
// Problem : C. Yet Another Broken Keyboard
// Contest : Codeforces - Codeforces Round #605 (Div. 3)
// URL : https://codeforces.com/problemset/problem/1272/C
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
ll work(string s){
	ll ans=0,i=0,n=s.size();
	while(i<n){
		ll cnt=0;
		while(i<n && s[i]=='0') i++;
		while(i<n && s[i]=='1'){
			cnt+=1;
			i++;
		}
		ans += cnt*(cnt+1)/2;
	}
	return ans;
}
void solve(){
	int n,k; string s,s1=""; map<char,bool> ma;
	cin>>n>>k>>s;
	while(k--){
		char ch; cin>>ch; ma[ch] = 1;
	}
	for(int i=0;i<n;i++){
		if(ma[s[i]]) s1 += '1';
		else s1+='0';
	}
	cout<<work(s1);
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
/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e6)
#define mod (ull)(1e9+7)
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
#define va(x) (x%mod)
int numWays(string s) {
      int n=s.size(), ones=0;
      for(char ch:s) ones += (ch=='1');
	   if(ones==0) return va(va(n-1)*va(n-2)/2);
      if(ones%3) return 0;
      int di = ones/3,d2 = di,i=0,z1=01,z2=01;
      	while(di){
      		if(s[i]=='1') di--;
      		i+=1;
      	}
		while(s[i]=='0'){
			i+=1; z1+=1;
		}
		while(d2){
			if(s[i]=='1') d2--;
			i+=1;
		}
		while(s[i]=='0'){
			i+=1; z2+=1;
		}
		return va(va(z1)*va(z2));

}
void solve(){
	string s; cin>>s;
	cout<<numWays(s);
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
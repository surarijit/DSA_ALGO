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
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int lis(string &a, string &b, int x, int y){
	if(x==0 || y==0) return 0;
	if(a[x-1]==b[y-1]) return 1+lis(a,b,x-1,y-1);
	return max(lis(a,b,x-1,y),lis(a,b,x,y-1));
}

int work(string &s, int x, int y){
	if(x==y) return 1;
	if(s[x] != s[y]) return max(work(s,x+1,y), work(s,x,y-1));
	if(abs(x-y)==1 ) return 2;
	 return 2+ work(s,x+1,y-1);
}
void solve(){
string s;
cin>>s;
string s1 = s; reverse(s);
printf("%d\n",lis(s,s1,s.size(),s.size()));
printf("%d\n",work(s,0,s.size()-1));
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
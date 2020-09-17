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
string work(int n){
	string s="";
	while(n){
		s= (char)(n%2+'0')+s;
		n=n>>1;
	}
	return s;
}
int solve(int n){
	string s = work(n);
	// cout<<s<<endl;
	int i=0,ans=0,cnt=0;
	while(i<s.size()){
		cnt=0;
		if(s[i++]=='1')
		while(i<s.size() && s[i]=='0'){
			cnt+=1;
			i++;
		}
		if(i<s.size() && s[i]=='1') ans = max(ans,cnt);
		
	}
	return ans;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	int n;cin>>n;
    	cout<<solve(n);
    }
    return 0;
}
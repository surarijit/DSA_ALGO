/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e3)
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
string printSubStr(string str, int low, int high) 
{ 
return str.substr(low,high-low+1);
string s="";
    for (int i = low; i <= high; ++i) 
        s+= str[i];
        return s; 
} 
  
string solve(string s){
	int n = s.size(),start=0,len=0; bool dp[n+1][n+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n;i++) dp[i][i] =1;
	for(int i=0;i+1<n;i++) dp[i][i+1] = s[i]==s[i+1];
	for(int k=3;k<=n;k++){
		for(int i=0;i+k-1<n;i++){
			int j=i+k-1;
			if(s[i]==s[j] && dp[i+1][j-1]) dp[i][j] = 1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(dp[i][j] && j-i+1>len){
				len = j-i+1;
				start = i;
			}
		}
	}
  	return s.substr(start,len);
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	string s; cin>>s;
    	cout<<solve(s);
    }
    return 0;
}
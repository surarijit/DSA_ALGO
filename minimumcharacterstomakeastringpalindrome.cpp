/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define mod (ll)(1e9+7)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define reverse(a) reverse(all(a))
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
#define SIZE (int)(1e3)
bool check(int i, int j, string &s){
	while(i<j){
		if(s[i]!=s[j]) return 0;
		i+=1; j-=1;
	}
	return 1;
}

int solve(string A) {
	 string s=A; int i=0,j=s.size()-1,cnt=0;//cout<<j+1;
   while(i<=j){
       if(check(i,j,s)) i+=1;
       else cnt+=1;
       j-=1;
   }
   return cnt;
}

int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	string s;cin>>s;
    	cout<<solve(s);
    }
    return 0;
}
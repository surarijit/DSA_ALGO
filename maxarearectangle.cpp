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
int hist(vector<int> a,int &m){
	stack<int> s; int i,area,maxarea = 0;
	for( i=0;i<m;i++){
		if(s.empty()||a[s.top()] < a[i]) s.push(i);
		else{
			int tp = s.top(); s.pop();
			area = a[tp]*(s.empty()?i: i-s.top()-1);
			maxarea = max(area,maxarea);
		}
	}
	while(!s.empty()){
		int tp = s.top();s.pop();
		area = a[tp]*(s.empty()?i:i-s.top()-1);
		maxarea = max(area,maxarea);
	}
	return maxarea;
}
int maximalRectangle(vector<vector<int> > &a) {
    int n=a.size(),m=a[0].size(),maxarea=0;
    vi dp(n,0);
	   for(int i=0;i<n;i++){
	       for(int j=0;j<m;j++) 
	        if(a[i][j])dp[j]+=1;
	             else dp[j] = 0;
      	 maxarea = max(maxarea,hist(dp,m));
       }
   
   return maxarea;
}

void solve(){
	
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
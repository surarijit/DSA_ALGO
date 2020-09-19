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
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;

#define SIZE (int)(7)
#define pi pair<int,int>
#define help(a,x,y) (x==-1?0:abs(a.first-x)+ abs(a.second-y))
  unordered_map<char, pi> ma; 
  int dp[SIZE*50][SIZE][SIZE][SIZE][SIZE];
    int work(int i, string &word, int x1,int y1, int x2, int y2){
        if(i==word.size()) return 0;
		if(dp[i][x1+1][y1+1][x2+1][y2+1]!=-1) return dp[i][x1+1][y1+1][x2+1][y2+1];
        pi a = ma[word[i]];
        int cost1 = help(a,x1,y1), cost2 = help(a,x2,y2);
        return dp[i][x1+1][y1+1][x2+1][y2+1] = min(cost1+work(i+1,word,a.first,a.second,x2,y2),
                  cost2+ work(i+1,word,x1,y1,a.first,a.second));
    }
    int minimumDistance(string word) {
        ma.clear();char ch = 'A';
	memset(dp,-1,sizeof(dp));
        for(int i=0;i<5;i++){
            for(int j=0;j<6 && ch<='Z';j++){
                ma[ch] = {i,j}; ch+=1;
            }
        }
        return work(0,word,-1,-1,-1,-1);
    }
void solve(){
	string s;cin>>s;
	cout<<minimumDistance(s);
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
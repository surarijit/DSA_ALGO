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
#define va(x) ((x)%mod)
#define vi vector<int>
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
 bool work(string s, string p) {
        int m = s.size(), n = p.size(), i, j, k;
        vector<vector<int>> dp(m+1, vector<int>(n+1,0));

        dp[0][0] = true; 
        
        for(i = 0; i <= m; ++i)
        {         
            for(j = 1; j <= n; ++j)
            {
                
                if(i==0){ 
                    dp[i][j] = dp[i][j-1] && (p[j-1]=='*');
                }
                else if(p[j-1]=='*'){
                    dp[i][j] = dp[i][j-1] || dp[i-1][j];
                }               
                else {
                    dp[i][j] = ((s[i-1]==p[j-1]) || (p[j-1])=='?') && dp[i-1][j-1];
                }
            }
        }
        return dp[m][n];
    }
 bool help(string &s, string &p) {
        vector<vector<int>> memo(p.size() + 1, vector<int>(s.size() + 1));
	memo[0][0] = 1;
	for(int i = 1; i <= p.size(); i++)
		memo[i][0] = p[i - 1] == '*' && memo[i - 1][0];

	for(int i = 1; i <= p.size(); i++) {
		for(int j = 1; j <= s.size(); j++) {
			if(p[i - 1] == '*')
				memo[i][j] = memo[i - 1][j] || memo[i][j - 1];
			else if(p[i - 1] == '?' || p[i - 1] == s[j - 1])
				memo[i][j] = memo[i - 1][j - 1];
		}
	}

	return memo.back().back();
    }

int32_t main()
{
    string a,b;
    cin>>a>>b;
    cout<<help(b,a)<<endl;
    cout<<work(b,a)<<endl;
}
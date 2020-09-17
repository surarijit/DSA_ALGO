
// Problem : E. Polygon
// Contest : Codeforces - Codeforces Round #644 (Div. 3)
// URL : https://codeforces.com/problemset/problem/1360/E
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
#define val(i,j) (a[i][j])
bool solve(){
	int n; cin>>n; bool a[n][n]={{0}};
	for(int i=0;i<n;i++){
		string s; cin>>s;
		for(int j=0;j<n;j++) a[i][j]= s[j]-'0';
		
	}
	for(int i=n-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			if(a[i][j]){
				if(a[i+1][j] || a[i][j+1])continue;
				else return 0;
			}
		}
	}
	return 1;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}
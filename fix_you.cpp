//Tell your code to believe in God
//@surcode
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
	int n,m;
	cin>>n>>m;
	vector<vector<char>> a(n,vector<char> (m));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) cin>>a[i][j];
	int i=n-1,cnt = 0;
	for(int j=0;j<m-1;j++) if(a[i][j]=='D') cnt++;
	int j=m-1;
	for(int i=0;i<n-1;i++) if(a[i][j]=='R') cnt++;
	cout<<cnt<<endl;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
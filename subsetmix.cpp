
// Problem : A. Subset Mex
// Contest : Codeforces - Codeforces Round #670 (Div. 2)
// URL : https://codeforces.com/contest/1406/problem/A
// Memory Limit : 512 MB
// Time Limit : 1000 ms
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
#define input(a) {for(auto &i1 : a)cin>>i1;}
#define display(a) {for(auto &i1:a)cout<<i1<<" ";cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void solve(){
	int n; cin>>n; vi a(n); input(a); sort(a);  
	int kodd =0,keven=0; bool flag1= 1, flag2=1;
	for(int i=0;i<n && (flag1||flag2);i++){
		if(i&1 && flag1){
			if(kodd==a[i]) kodd++;
			else flag1=0;
		}
		if(i%2==0 && flag2){
			if(keven==a[i]) keven++;
			else flag2=0;
		}

	//cout<<kodd<<" "<<keven<<endl;
	}
	cout<<kodd+keven<<endl;
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

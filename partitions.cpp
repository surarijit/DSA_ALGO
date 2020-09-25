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
#define val(a,b) (prefix[a]-(b?prefix[b-1]:b))
int solve(int n, vi &a){
	int cnt=0; vi prefix(n,0);
	for(int i=0;i<n;i++){
		prefix[i] = a[i];
		if(i) prefix[i]+=prefix[i-1];
	}
	int tsum = prefix[n-1];
	if(tsum%3)return 0;
	for(int i=01;i<n;i++){
		for(int j=i;val(i-1,0)==tsum/3 && j+1<n;j++){
			if(val(i-1,0)==val(j,i) && val(j,i)== val(n-1,j+1))cnt+=1;
		}
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
int n;cin>>n; vi a(n); input(a);
    	cout<<solve(n,a);
    }
    return 0;
}
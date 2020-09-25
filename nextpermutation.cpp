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
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
int bs(int start, int end, vi &a,int x){
	for(int i=end;i>=start;i--){
		if(a[i]>x) return i;
	}
}
void nextPermutation(vector<int>& a) {
        int n=a.size(),i=a.size()-1;
        while(i>0){
        	if(a[i]>a[i-1]) {
        		break;
        	}
        	i-=1;
        }
        if(i==0){ reverse(a); return ;}
        int j=i-1, x = bs(j+1,n-1,a,a[j]);
        swap(a[j],a[x]);
        sort(a.begin()+j+1,a.end());
    }
void solve(){
	int n;cin>>n; vi a(n); input(a);
	nextPermutation(a);display(a);
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
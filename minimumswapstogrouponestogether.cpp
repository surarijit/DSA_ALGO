/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<algorithm>
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
int work(vi &s){
    int i=0,j=s.size()-1,ans=0;
    while(i<j){
    	
        while(i<j && s[i]==1) i+=1;
        while(j>i && s[j]==0) j-=1;
        if(i==j) break;
        ans+=1;i+=1; j-=1;
    }
    return ans;
}
void solve(){
	int n;cin>>n; vi a(n); input(a); vi b(all(a)); reverse(b);
	cout<<min(work(b),work(a))<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
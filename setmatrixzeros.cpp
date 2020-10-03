/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
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
void setZeroes(vector<vector<int> > &a) {
    int n=a.size(),m=a[0].size();
    for(int i=01;i<n;i++){
        for(int j=01;j<m;j++){
            if(a[i][j]==0){
                a[i][0] = a[i][0]==0?0:-1;
                a[0][j] = a[0][j]==0?0:-2;
            }
        }
    }
    
   for(int i=01;i<n;i++){
   		for(int j=1;j<m;j++){
   			if(a[i][0]==-1 || a[i][0]==0 || a[0][j] ==-2 || a[0][j]==0 ) a[i][j]=0;
   		}
   }
   
   
   bool flag1=1,flag2=1;
   for(int i=0;i<n && flag1;i++) if(a[i][0]==0) flag1=0;
   for(int j=0;j<m && flag2;j++) if(a[0][j]==0) flag2=0;
   for(int i=0;i<n && !flag1;i++) a[i][0]=0;
   for(int j=0;j<m && !flag2;j++) a[0][j]=0;
   for(int i=0;i<n && flag1;i++) if(a[i][0]<0) a[i][0]=0;
   for(int j=0;j<m && flag2;j++) if(a[0][j]<0) a[0][j]=0;
}
void solve(){
	int n,m;cin>>n>>m;
	vector<vi> a(n,vi (m));
	for(int i=0;i<n;i++) input(a[i]);
	setZeroes(a);
	for(int i=0;i<n;i++) display(a[i]);
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
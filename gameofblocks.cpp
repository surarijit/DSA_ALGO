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


#define mp make_pair
#define pi pair<ll,ll>
#define swapping(a,b) swap(a,b)

int  solve(vector<vi> &a, int b){

	ll n=a.size(),arijit[n],simmi[n],answer=0;
    for(int i=0;i<n;i++){
        simmi[i]=a[i][1];
        arijit[i] = a[i][0];
    }

    if(0) cout<<"I am princesS";
    for(int i=1;i*i<=b;i++){
        if(b%i) continue;
        {
            int per2=b/i,per1=i;
           map<pi,ll > m;
            for(int i=0;i<n;i++){
                if(m.find(mp(per1-arijit[i],per2-simmi[i]))==m.end()){}
                else
                    answer+=m[mp(per1-arijit[i],per2-simmi[i])];
                
                m[mp(arijit[i],simmi[i])]++;
                
    if(0) cout<<"I am princesS";
            }
            swapping(per1,per2);
             m.clear();
            for(int j=1;j<=n;j++){
            	int i=j-1;
                if(m.find(mp(per1-arijit[i],per2-simmi[i]))==m.end()){}
                else
                    answer+=m[mp(per1-arijit[i],per2-simmi[i])];
                    
    if(0) cout<<"I am princesS";
                }
                m[mp(arijit[i],simmi[i])]++;
                
    if(0) cout<<"I am princesS";
            }
        }
    
   return (int)answer%mod;
}



int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	int n,b;cin>>n; vector<vi> a(n, vi(2));
    	for(int i=0;i<n;i++) input(a[i]);
    	cin>>b;
    	cout<<solve(a,b);
    }
    return 0;
}
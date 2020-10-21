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

using namespace std;

#define ll long long int
using namespace std;
#define pi (2*acos(0.0))


int main()
{
    int x,y;cin>>x>>y;
    float x1=(float)x;
    float y1=(float)y;
    
    if((x1/2)<=y1)
    {
        float p = (x1*y1 - (pi*(x1/2)*(x1/2))/2)/(x1*y1);
      cout<<fixed<<setprecision(10)<<p;
    }
    else
    {
        auto a=sqrt((x1/2)*(x1/2) - y1*y1);
        auto ar1=y1*a,
         b=x1/2-a,
        z=sqrt(b*b+y1*y1);
        float angle = acos(1-(2*z*z)/(x1*x1));
      float ar2 = (angle/2)*(x/2)*(x/2);
        float ar=2*ar2+ar1;
        float p=(1-ar/(x1*y1));
        cout<<fixed<<setprecision(10)<<p;
      
    }
    return 0;
}
	
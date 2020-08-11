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
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--){
        int n;  
        ll x2=INT_MAX,x1=INT_MAX,ans=0;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i], x1 = min(x1,a[i]);
        for(int i=0;i<n;i++) cin>>b[i], x2 = min(x2,b[i]);
        for(int i=0;i<n;i++){
            ll y = min(a[i]-x1,b[i]-x2);
            ans += y + (a[i]-x1-y) + (b[i]-x2-y);
        }
        cout<<ans<<endl;
    }
    return 0;
}
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
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int count_odd = 0;
        if(r&1) count_odd +=1;
        if(g&1) count_odd +=1;
        if(b&1) count_odd +=1;
        if(w&1) count_odd +=1;
        if(count_odd <=1) {
            cout<<"Yes\n";
            continue;
        }
        r-=1; g-=1; b-=1; w+=3; count_odd = 0;
        if(r&1) count_odd +=1;
        if(g&1) count_odd +=1;
        if(b&1) count_odd +=1;
        if(w&1) count_odd +=1;
        if(r>=0 && g>=0 && b>=0 &&
        w>=0 && count_odd<=1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
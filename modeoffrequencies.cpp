/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n); input(a);
    map<int,int> ma,m;
    int ans = INT_MIN,index=-1;
    for(int i=0;i<n;i++) {
        ma[a[i]]+=1;
    }
    int maxi=INT_MIN;
    for(auto it=ma.begin();it!=ma.end();it++){
        m[it->second]+=1;
        maxi = max(maxi,m[it->second]);
        if(m[it->second]==maxi) index = it->second;
    }
    for(auto it=m.begin();it!=m.end();it++){
            if(it->second ==maxi){
                index = min(index,it->first);
            }
    }
    cout<<index<<endl;

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
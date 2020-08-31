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
#define ff pq.top()
void solve(){
    int n;
    cin>>n;
    vector<int> a(n,0); input(a);; 
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int cnt=0;
        while(i<n && !a[i]){
            cnt++;
            i++;
        }
        if(cnt) pq.push(cnt);
    }
    if(pq.empty()){
        cout<<"No\n";return;
    }
    if(pq.size()==1 ){
        if(ff%2)
        cout<<"Yes\n";
    else cout<<"No\n";
        return;
    }
    
    int first = ff; pq.pop();
    int second = ff;
    if(first%2  && (first+1)/2 > second)cout<<"Yes\n";
    cout<<"No\n";
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
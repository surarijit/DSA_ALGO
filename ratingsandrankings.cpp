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
    int n,m;
    cin>>n>>m;
    vector<int> initialratings(n,0),maxratings(n,0),qualify(n,1);
    input(initialratings); 
    vector<vector<int>> ratings(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        ratings[i][0]= initialratings[i];
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            if(j) ratings[i][j] = ratings[i][j-1] + x;
            else ratings[i][j] += x;
        }
    }
   // for(int i=0;i<n;i++) display(ratings[i]);
    for(int i=0;i<n;i++) maxratings[i] = maxelem(ratings[i]);
    //display(maxratings);
    for(int j=0;j<m;j++){
        set<int> s; int cnt=1;
        map<int,int> ma;
        for(int i=0;i<n;i++) s.insert(ratings[i][j]);
        for(auto it=s.begin();it!=s.end();it++) ma[*it] = cnt++;
        for(int i=0;i<n;i++) rankings[i][j] = ma[ratings[i][j]];    
    }

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
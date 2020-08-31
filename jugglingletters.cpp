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
bool solve(){
    int n;cin>>n;
    vector<string> s(n); input(s);
    map<char, int> ma;
    for(int i=0;i<n;i++){
        for(int j=0;j<s[i].size();j++){
            ma[s[i][j]]+=1;
        }
    }
    for(auto it = ma.begin();it!=ma.end();it++) {
        int x = it->second;
        if(x%n) return 0;
    }
    return 1;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	if(solve()) printf("YES\n");
        else printf("NO\n");;
    }
    return 0;
}
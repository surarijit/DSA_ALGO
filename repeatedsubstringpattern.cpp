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
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
 bool repeatedSubstringPattern(string s) {
        map<char,bool> ma,m; int n=s.size();
        string word ="";
        for(int i=0;i<n;i++) m[s[i]] = 1;
        for(int i=0;i<n/2;i++){
            word += s[i];
            ma[s[i]] = 1;
            if(ma==m && n%word.size()==0){
                string s1 = word;
                while(s1.size()<n){
                    s1 += word;
                }
                //if(s1.size()==n && s1==s) cout<<word<<endl;
                if(s1.size()==n && s1==s) return 1;
            }
        }
    return 0;
    }
void solve(){
	string s;
	cin>>s;
	cout<<repeatedSubstringPattern(s);
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}

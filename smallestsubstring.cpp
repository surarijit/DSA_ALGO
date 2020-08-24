/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int smallestsubstring(string s){
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++) m[s[i]] += 1;
    int d = m.size(),start = 0, x = s.size();
    m.clear();
    for(int i=0;i<s.size();i++){
        m[s[i]] +=1;
        if(m.size()==d){
             while(start<i && m[s[start]]-1){
               m[s[start]] --;
               x = min(x,i-start);
               start+=1;
             }
            }
        }
    return x;
}
void solve(){
	string s;
    cin>>s;
    printf("%d\n", smallestsubstring(s));
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
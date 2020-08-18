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
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<""; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define ff q.front()
int modulu(string s, int n){
    int r  =0;
    for(int i=0;i<s.size();i++){
        r = (r*10) + (s[i]-'0');
        r = r%n;
    }
    return r;
}
string multiple(int n){
    queue<string> q;
    unordered_map<int,bool> ma;
    q.push("1");
    while(!q.empty()){
        int rem = modulu(ff,n);
        if(!rem) return ff;
        if(ma[rem]==0){
            ma[rem] = 1;
            q.push(ff+'0');
            q.push(ff+'1');
        }
        q.pop();
    }
    return "-1";

}
void solve(){
    int n;
	cin>>n;
    display(multiple(n));
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
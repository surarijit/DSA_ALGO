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
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<""; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
string add(string s, int x){
    reverse(s);
    int carry = x,y;
    for(int i=0;i<s.size();i++){
        y = s[i] - '0' + carry;
        carry = y/10;
        y = y%10;
        s[i] = (char)(y+'0');
        if(!carry) break;
    }
    if(carry) s.pb((char)(carry+'0'));
    reverse(s);
    return s;
}
bool multiple(string s){
    ll n = 0;
    reverse(s);
    for(int i=0;i<s.size();i++){
        n = n*10+ (s[i]-'0');
    }
    return (n%9==0);
}
bool work(string s){
    string str = "";
    for(int i=0;i<s.size();i++) str = add(str,s[i]-'0');
    if(str.size()<=5) return multiple(str);
    return work(str);

}
void solve(){
	string n;
    cin>>n;
    if(!work(n)) printf("No\n");
    else printf("Yes\n");

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
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
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;

bool palcheck(string s)
{
    int i, j;
    for(i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j]) return False;
    }
    return True;
}

string best_str(string val)
{
    int i=0;
    int sz=val.size();
    for(int j=1;j<sz-2;j++)
    {
        int k=j+1;
        pt1=val.substr(i, j-i);
        if(palcheck(pt1))
        {
            for(int x=k, k<sz;x++)
            {
                pt2=val.substr(j,k-j);
                if(palcheck(pt2))
                {
                    pt3=val.substr(x, sz-x);
                    if(palcheck(pt3))
                    {
                        return pt1+pt2+pt3;
                    }
                }
            }
        }
    }
    return "Impossible";
}


bool palindrome_check(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]) return 0;
    }
    return 1;
}
vector<string> best_string(string val){
    int i = 0;
    for(int j=1;j<val.length()-2;j++){
        int k = j+1;
        string part1 = val.substr(val.begin()+i,val.begin()+j);
        if (palindrome_check(part1)){
           for(int x =k;x<val.length();x++)
           { string part2 = val.substr(val.begin()+j, val.begin()+x);
            if(palindrome_check(part2)){
                string part3 = val.substr(val.begin()+x,val.end());
                if(palindrome_check(part3)){
                    return {part1,part2,part3};
                }
            }


                       }
        }
    }
    return {"impossible"};
}
void solve(){
	string val;
    cin>>val;
    vector<string> ret = best_string(val);
    display(ret);
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
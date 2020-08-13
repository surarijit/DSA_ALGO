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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        unordered_map<int,char> ma;
        //cout<<ma.size()<<endl;continue;
        vector<int> ans;
        int j=0,i;
        while(j<n){
            if(s[j++]=='0'){
                for(i=1;i<=ma.size();i++){
                    if(ma[i]=='1'){
                        ma[i] = '0';
                        break;
                    }
                }
                if(i==ma.size()+1) ma[i] = '0';
            }
            else{
                for( i=1;i<=ma.size();i++){
                    if(ma[i]=='0'){
                        ma[i] = '1';
                        break;
                    }
                }
                if(i==ma.size()+1) ma[i] = '0';
            }
            ans.pb(i);
        }
        cout<<ma.size()<<endl;
        display(ans);
    }
    return 0;
}
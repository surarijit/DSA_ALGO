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
        int max_adjacent = 0;
        for(int i=0;i<n;){
            int cnt = 0;
            while(i<n && s[i]=='0') i+=1, cnt+=1;
            max_adjacent = max(max_adjacent,cnt);
            cnt = 0;
            while(i<n && s[i]=='1') i+=1, cnt+=1;
            max_adjacent = max(max_adjacent,cnt);
        }
        cout<<max_adjacent<<endl;
        for(int i=0;i<n;){
            int cnt =0;
            while(i<n && s[i]=='0') {
                i+=1;
                cnt+=1;
                cout<<cnt<<" ";
            }
            cnt = 0;
            while(i<n && s[i]=='1') {
                i+=1;
                cnt+=1;
                cout<<cnt<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
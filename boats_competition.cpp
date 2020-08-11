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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> w(n);
        for(int i=0;i<n;i++) cin>>w[i];
        unordered_map<int,int> ma;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            ma[w[i]+w[j]] += 1;
        }
        int s = 0, max_count = INT_MIN,k=0;
        for(auto it = ma.begin();it!=ma.end();it++){
             if(max_count< it->second){
                    max_count = it->second;
                    s = it->first;
             }
        }
        cout<<max_count<<endl;
    }
    return 0;
}
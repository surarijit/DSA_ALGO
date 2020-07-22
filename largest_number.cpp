//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
using namespace std;
typedef long long ll;
string soln( const vector<int> &a){
    int i;
    vector<string> b;
    for(i=0;i<a.size();i++) b.pb(to_string(a[i]));
    display(b);
    sort(b);
    reverse(all(b));
    display(b);
    return "";
}
int main()
{
    vector<int> a={3, 30, 34, 5, 9};
    cout<<soln(a)<<endl;;
    return 0;
}
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
int main()
{
    return 0;
}
vector<int> Solution::subUnsort(vector<int> &a) {int i,n=a.size(),l=0,r=0;
    for(i=0;1+i<n;i++)
    {
        if(a[i+1]<a[i]){
            l = i;
            break;
        }
    }
    if(i+1==n) return {-1};
    for(i=n-1;i-1>=0;i--){
        if(a[i]<a[i-1]){
            r = i;
            break;
        }
    }
    //cout<<"before considering "<<l<<" "<<r<<endl;
    int min1 = a[l], max1 = a[r];
    for(i=l;i<=r;i++){
        min1 = min(min1,a[i]);
        max1 = max(max1,a[i]);
    }
    for(i=0;i<l;i++) {
        if(a[i]>=max1){
            l=i;break;
        }
    }

    for(i=n-1;i>r;i--)
    {
        if(a[i]<=min1){
            r=i;
            break;
        }
    }
    vector<int> b = {l,r};  
    return b;
}

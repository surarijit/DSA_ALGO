//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
using namespace std;
typedef long long ll;
int soln(vector<int> &a)
{
    int i,n = a.size(),min1,min2,max1,max2;
    min1 = min2 = INT_MAX;
    max1 = max2 = INT_MIN;
    for(i=0;i<n;i++)
    {
        max1 = max(max1,a[i]+i);
        max2 = max(max2,a[i]-i);
        min1 = min(min1,a[i]+i);
        min2 = min(min2,a[i]-i);
    }
    return max(abs(max1-min1), abs(max2-min2));
}
int main()
{
    vector<int> a = {1,3,-1};
    display(a);
    cout<<soln(a)<<endl;
    return 0;
}
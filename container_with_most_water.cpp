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

#define water(i,j) (min(A[i],A[j])*(j-i))
int soln(vector<int> &A)
{
    int i = 0,n=A.size(),j=n-1,area = 0;
    while(i<j)
    {
        area = max(area,water(i,j));
        if(A[i]>A[j]) j-=1;
        else i+=1;
    }
    return area;
}
int main()
{
    vector<int> a = {1, 5, 4, 3};
    cout<<soln(a)<<endl;
    return 0;
}
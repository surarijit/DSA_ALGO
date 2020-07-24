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
int threeptr(const vector<int> &A, const vector<int> &B, const vector<int> &C)
{
    int i=0,j=0,k=0,mi=INT_MAX,ma=INT_MIN,diff = INT_MAX,n1=A.size(),n2=B.size(),n3 = C.size();
    while(i<n1 && j<n2 && k< n3)
    {
        mi = min(A[i],min(B[j],C[k]));
        ma = max(A[i],max(B[j],C[k]));
        diff = min(diff,ma-mi);
        if(!diff) return 0;
        if(mi==A[i]) i++;
        else if(mi==B[j]) j++;
        else k++;
    }
    return diff;
}
int main()
{
    vector<int> A = {1,4,10};
    vector<int> B = {2,15,20};
    vector<int> C = {10,12};
    cout<<threeptr(A,B,C)<<endl;
    return 0;
}
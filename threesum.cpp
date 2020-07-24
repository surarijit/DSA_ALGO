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

int soln(const vector<int> &A,int B)
{
    int i,ans = -1,ans_min = INT_MAX,n=A.size();
    vector<int> a(all(A));
    sort(a);
    for(i=0;i+2<n;i++)
    {
        int x = i+1,y=n-1;
        while(x<y)
        {
            int b = a[x]+a[y]+a[i];
            if(ans_min > abs(b-B)){
                ans_min = abs(b-B);
                ans = b;
            }
            if(b>B) y--;
            else if(b<B) x++;
            else return B;
        }
        
    }   
    return ans;
}
int main()
{
    vector<int> a = {-1,2,1,-4};
    int target = 1;
    //display(a);
    //cout<<soln(a,target)<<endl;
    a = {-5, 1, 4, -7, 10, -7, 0, 7, 3, 0, -2, -5, -3, -6, 4, -7, -8, 0, 4, 9, 4, 1, -8, -6, -6, 0, -9, 5, 3, -9, -5, -9, 6, 3, 8, -10, 1, -2, 2, 1, -9, 2, -3, 9, 9, -10, 0, -9, -2, 7, 0, -4, -3, 1, 6, -3};
    sort(a); display(a); target = -1;
    cout<<soln(a,target)<<endl;
    a = {2, 1, -9, -7, -8, 2, -8, 2, 3, -8 };
    sort(a);
    display(a);target = -1;
    cout<<soln(a,target)<<endl;
    return 0;
}
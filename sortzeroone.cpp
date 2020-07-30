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
void soln(vector<int> &a)
{
   int i = 0, n=a.size(),j=n-1;
   while(i<j)
   {
       while(!a[i]) i+=1;
       while(a[j]) j-=1;
       if(i<j) swap(a[i],a[j]);
   }
   j=n-1;
   while(i<j)
   {
       while(a[i]==1) i+=1;
       while(a[j]==2) j-=1;
       if(i<j) swap(a[i],a[j]);
   }
   display(a);
}
int main()
{
    vector<int> a = {1,1,1,0,2,0,2,0,1,0,0,0,1,2,2,0,1,1,2};
    display(a);
    soln(a);
    return 0;
}
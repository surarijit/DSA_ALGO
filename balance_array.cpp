//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define all(a) a.begin(),a.end()
#define pb push_back
using namespace std;
typedef long long ll;
void display(vector<int> a)
{
    for(int i=0;i<a.size();i++) 
    cout<<a[i]<<" ";
    cout<<endl;
}
int solution(vector<int> &a)
{
    int i,n = a.size(),cnt=0;
    vector<int> prefix_odd(n,0),prefix_even(n,0),suffix_odd(n,0),suffix_even(n,0);
    for(i=0;i<n;i++){
        if(i&1) prefix_odd[i] = a[i];
        else prefix_even[i] = a[i];
        if(i) prefix_odd[i] += prefix_odd[i-1], prefix_even[i] += prefix_even[i-1];
    }
    for(i=n-1;i>=0;i--){
        if(i&1) suffix_odd[i] = a[i];
        else suffix_even[i] = a[i];
        if(i!=n-1) suffix_even[i] += suffix_even[i+1], suffix_odd[i] += suffix_odd[i+1];
    }
    //display(suffix_even);display(suffix_odd);
    for(i=0;i<n;i++)
    {
        if(i!=0 && i!=n-1){
            if(prefix_odd[i-1]+suffix_even[i+1]==prefix_even[i-1]+suffix_odd[i+1])
            cnt += 1;
        }
        else if(i==0 && suffix_odd[i+1] ==  suffix_even[i+1]) cnt+=1;
        else if(i==n-1 && prefix_even[i-1]== prefix_odd[i-1]) cnt+=1;
    }
    return cnt;
}
int main()
{
    vector<int> a = {2,1,6,4};
    display(a);
    cout<<solution(a)<<endl;
    vector<int> b= {5, 5, 2, 5, 8};
    display(b);
    cout<<solution(b)<<endl;
    return 0;
}
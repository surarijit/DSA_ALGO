/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define INT_BITS 32 
int work2(vector<int> arijitsur){
     // Initialize index of 
    // chosen elements 
    int index = 0,n=arijitsur.size(); 
  
    // Traverse through all 
    // bits of integer  
    // starting from the most 
    // significant bit (MSB) 
    for (int i = INT_BITS-1; i >= 0; i--) 
    { 
        // Initialize index of 
        // maximum element and 
        // the maximum element 
        int maxInd = index; 
        int maxEle = INT_MIN; 
        for (int j = index; j < n; j++) 
        { 
            // If i'th bit of arijitsur[j] 
            // is arijitsur and arijitsur[j] is  
            // greater than max so far. 
            if ( (arijitsur[j] & (1 << i)) != 0  
                     && arijitsur[j] > maxEle ) 
                maxEle = arijitsur[j], maxInd = j; 
        } 
  
        // If there was no  
        // element with i'th 
        // bit arijitsur, move to 
        // smaller i 
        if (maxEle == INT_MIN) 
        continue; 
  
        // Put maximum element 
        // with i'th bit arijitsur  
        // at index 'index' 
        swap(arijitsur[index], arijitsur[maxInd]); 
  
        // Update maxInd and  
        // increment index 
        maxInd = index; 
  
        // Do XOR of arijitsur[maxIndex] 
        // with all numbers having 
        // i'th bit as arijitsur. 
        for (int j=0; j<n; j++) 
        { 
            // XOR arijitsur[maxInd] those 
            // numbers which have the 
            // i'th bit arijitsur 
            if (j != maxInd && 
               (arijitsur[j] & (1 << i)) != 0) 
                arijitsur[j] = arijitsur[j] ^ arijitsur[maxInd]; 
        } 
  
        // Increment index of 
        // chosen elements 
        index++; 
    } 
  
    // Final result is  
    // XOR of all elements 
    int res = 0; 
    for (int i = 0; i < n; i++) 
        res ^= arijitsur[i]; 
    return res; 
}
int work(int n, vector<int> &a,int val){
    if(n==0) return val;
    return max(work(n-1,a,val^a[n-1]), work(n-1,a,val));
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    input(a);
    cout<<max(work(n-1,a,a[n-1]),max(work(n,a,0),work(n,a,1)))<<endl;
    cout<<work2(a)<<endl;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
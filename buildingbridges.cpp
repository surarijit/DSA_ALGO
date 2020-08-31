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
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
struct CityPairs{
	int north,south;
};

bool compare(struct CityPairs a, struct CityPairs b) 
{ 
    if (a.south == b.south) 
        return a.north < b.north; 
    return a.south < b.south; 
} 

int maxBridges(struct CityPairs values[], int n){
	int lis[n]; 
    for (int i=0; i<n; i++) 
        lis[i] = 1; 
          
    sort(values, values+n, compare); 
      
    // logic of longest increasing subsequence 
    // applied on the northern coordinates 
    for (int i=1; i<n; i++) 
        for (int j=0; j<i; j++) 
            if (values[i].north >= values[j].north  
                && lis[i] < 1 + lis[j]) 
                lis[i] = 1 + lis[j]; 
          
          
    int max = lis[0]; 
    for (int i=1; i<n; i++) 
        if (max < lis[i]) 
            max = lis[i]; 
      
    // required number of bridges 
    // that can be built         
    return max;         
	
}
void solve(){
	struct CityPairs values[] = {{6, 2}, {4, 3}, {2, 6}, {1, 5}}; 
    int n = 4; 
    cout << "Maximum number of bridges =\n" 
             << maxBridges(values, n);     
    
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
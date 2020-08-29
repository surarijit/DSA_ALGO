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
bool prime[SIZE];
void seive(int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
   /* for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; */
} 
void solve(){
    int n; cin>>n;
    bool flag1 = 1;
    vector<int> a(n); input(a);
    for(int i=0;i<n&&flag1;i++){
        if(!prime[a[i]]) {flag1 = 0;}
    }
    if(flag1) cout<<"pairwise coprime\n";
    else{
        int ans =a[0];
        for(int i=1;i<n;i++) ans = __gcd(ans,a[i]);
        if(ans==1) cout<<"setwise coprime\n";
    else cout<<"not coprime\n";
    }
}
int main()
{
    IOS
    seive(100);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
using namespace std;



#define ll long long
#define SIZE (ll)(1e5+10)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define product(a,b) va(va(a)*va(b))
#define sumation(a,b) va(va(a)+va(b))
#define subtraction(a,b) sumation(a,mod-b)
#define inve(a) exa(a,mod-2)
#define binpow exa
#define C mod
vi dp(SIZE,0);
void initialise(){
	dp[0]=0;
	dp[1] =1;
	for(int i=2;i<SIZE;i++) dp[i] = i-1;
	for(int i=2;i<SIZE;i++)
	{for(int j=i*2;j<SIZE; j+=i) dp[j]-=dp[i];}
}

ll exa(ll A, ll B)  
{   
    if (A == 0)  
        return 0;  
    if (B == 0)  
        return 1;  
  
    ll y;  
    if(B&1){
         y = A % C;  
        y = (y * exa(A, B - 1) % C) % C;  
    }
    else
   {  
        y = exa(A, B / 2);  
        y = (y * y) % C;  
    }  
    
  
    return ((y + C) % C);  
}
vector<int> Solution::solve(int A, int k) {
     initialise();
	vi ans(A,0);
	for(ll i=1;i<=A;i++){
		ll numerator=0,denominator=0;
		for(ll j=1;j*j<=i;j++){
			if(i%j==0){
				int d1=j,d2=i/j;
				numerator =  sumation(numerator,product(dp[i/d1],(binpow(k-1,d1))));
				denominator = sumation(denominator,product(dp[i/d1],(binpow(k,d1))));
				if(d1==d2)continue;
				numerator =  sumation(numerator,product(dp[i/d2],(binpow(k-1,d2))));
				denominator = sumation(denominator,product(dp[i/d2],(binpow(k,d2))));
			}
		}
	ll prob = subtraction(1,product(numerator,inve(denominator)));
	ans[i-1] =product(k,prob);
	}
	return ans;
}

int main(){
	return 0;
}
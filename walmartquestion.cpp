
#include <bits/stdc++.h> 
using namespace std; 
#define mod 1000000007 
#define MAX (int)(1e6+4)
int seive[MAX + 1]; 
#define ll long long int
#define ppR( L,  R)  ((seive[R] * inv(seive[L - 1])) % mod)
#define inv(n)  exam(n, mod - 2, mod)
void initial() 
{ 
	
	bool prime[MAX + 1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p = 2; p * p <= MAX; p++) { 

		if (prime[p] == true) { 

			for (int i = p * 2; i <= MAX; i += p) 
				prime[i] = false; 
		} 
	} 

	seive[0] = seive[1] = 1; 
	for (int p = 2; p <= MAX; p++) { 
		seive[p] = seive[p - 1]; 
		if (prime[p]) 
			seive[p] = (seive[p] * p) % mod; 
	} 
} 


ll exam(ll A, ll B, ll C)  
{   
    if (A == 0)  
        return 0;  
    if (B == 0)  
        return 1;  
  
    ll y;  
    if(B&1){
         y = A % C;  
        y = (y * exam(A, B - 1,C) % C) % C;  
    }
    else
   {  
        y = exam(A, B / 2,C);  
        y = (y * y) % C;  
    }  
    
  
    return ((y + C) % C);  
}


int main() 
{ 
	initial(); 
	ll n,m; int x; cin>>n>>x>>m;
	int L = 1, R = x;
	long long y = ppR(L, R);
	cout<<exam(n,y,m)<<endl;


	return 0; 
} 

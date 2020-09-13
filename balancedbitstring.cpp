/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define vi vector<int>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;

bool help(int zero, int one, int blank){
	if(one<zero) swap(zero,one);
	blank -= (one-zero);
	if(blank <0 || blank &1) return 0;
	return 1;
}
bool solve(){
	int n,k;string s; cin>>n>>k>>s;
	int one=0,zero=0,blank=0,i;
	for( i=0;i<k;i++){
		if(s[i]=='1') one+=1;
		else
		if(s[i]=='0') zero+=1;
		else blank +=1;
	}
	if(!help(zero,one,blank)) return 0;
	
	int start = 0;
	for(;i<n;i++){
		if(s[i]=='1') one+=1;
		else
		if(s[i]=='0') zero+=1;
		else blank +=1;
		
		if(s[start]=='1') one-=1;
		else if(s[start]=='0') zero -=1;
		else blank -=1;
		if(!help(zero,one,blank)) return 0;
		start +=1;
	}
	return 1;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}
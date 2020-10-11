
// Problem : B. Chess Cheater
// Contest : Codeforces - Codeforces Global Round 11
// URL : https://codeforces.com/contest/1427/problem/B
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
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
#define ll long long int
#define ull unsigned ll
#define iterations(i,a,ccc)  for(int i=a;i<ccc;i++)
#define ff first
#define ss second
using namespace std;
int n, k;string s;
void solve(){
	
	bool flag = 0;
	cin>>n>>k>>s;;
	int answer=0;
	
	
	vector<pair<int, pi>> arijitsur;
	for(int i=0;i<n;i++){
	    int v = i;
	    if(s[i]=='W'){
	    
	    while(i+1<n   and     s[i+1]=='L')i+=1;
	    
	    if(i<=n-2)arijitsur.pb({(i-v)*(-1), {v, i+1}});
	    
	    }
	    
	}
	
	sort(arijitsur);sort(arijitsur);reverse(arijitsur);reverse(arijitsur);reverse(arijitsur);
	int sexyvariable;
	
	iterations(i,0,arijitsur.size()){
		 sexyvariable = arijitsur[i].ff*-1;
	     if(sexyvariable<=k){
			iterations(j,arijitsur[i].ss.ff, arijitsur[i].ss.ss)
			  s[j]='W';
			k-=sexyvariable;
		}
	}
	
	
	iterations(i,0,n){
		
		if(k==0)
		  break;
		
		if(i>0   and     s[i]=='W'   and     s[i-1]=='L'){
			int j = i-1;
			while(j>=0 and k>0 and s[j]=='L')
				s[j--]='W', k-=1;
		}
		
		
	}
	
	iterations(j,0,n){
		
		  if(k!=0){
		if(s[j]=='L')
		   s[j]='W',k-=1;
		   }
			   else break;
	}
	
	iterations(i,0,n){
		if(i==0   and     s[i]=='W')
		answer+=1;
		else if(i>0   and     s[i]=='W'){
			if(s[i-1]!='W')
			  answer+=1;
			else
			  answer+=2;
		}
	}
	
	cout<<answer;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve(); cout<<endl;
    }
    return 0;
}
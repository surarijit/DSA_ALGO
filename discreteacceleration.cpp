
// Problem : C. Discrete Acceleration
// Contest : Codeforces - Grakn Forces 2020
// URL : https://codeforces.com/contest/1408/problem/C
// Memory Limit : 256 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<lld>
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
#define input(a) {for(int i1=01;i1+1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define lld long double
#define ull unsigned ll
using namespace std;
vi calctime(vi &a){
	ll n=a.size();lld speed =1.0; vi time(n);
	time[0]=0;
	for(ll i=01;i<n;i++){
		time[i] = abs(a[i]-a[i-1])/speed*1.0 + time[i-1];
		speed+=1;
	}
	return time;
}
void solve(){
	ll n,l; cin>>n>>l;vi a(n+2),speed(n+2); a[0]=0; a[n+1]=l;input(a);
 	vi lefttime = calctime(a), b=a;reverse(b);
 	vi righttime = calctime(b); reverse(righttime);
 	for(int i=0;i<speed.size();i++){
 		if(i) speed[i]= speed[i-1]+1;
 		else speed[i]=1;
 	}
 	vi lspeed = speed; reverse(speed); vi rspeed = speed;
 	//display(a);display(lspeed); display(rspeed);display(lefttime); display(righttime);
 	ll x = 0;
 	for(int i=0;i<a.size();i++){
 		if(lefttime[i]<righttime[i]) x=i;
 		else break;
 	}
 	lld t = lefttime[x],t1 = lefttime[x]-righttime[x+1], ff=rspeed[x+1]*t1,
 	dist = a[x+1]-a[x]-ff;
 	t+= dist/(lspeed[x] + rspeed[x+1]);
 	//cout<<x<<" "<<lspeed[x]+rspeed[x+1]<<endl;
 	 std::cout << std::fixed << std::showpoint;  std::cout << std::setprecision(6);
 	cout<<t<<endl; 
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
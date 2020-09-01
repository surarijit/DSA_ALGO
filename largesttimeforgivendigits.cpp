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
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {int n=a.size();for(int i1=0;i1<n;i1++) cin>>a[i1];}
#define display(a) {int n = a.size();for(int i1=0;i1<n;i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define Tochar(x) (char)(x+'0')
bool proper(vector<int> a){
	if(a[0]*10+a[1] < 24 && a[2]*10 + a[3] <60) return 1;
	return 0;
}
bool check(vector<int> a, vector<int>b){
	if(!proper(a)) return 0;
	sort(a);
	for(int i=0;i<4;i++){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
void dec(vector<int> &v){
	int n = v[0] * 1000 + v[1] *100 + v[2] * 10 +v[3];
	n-=1;
    for(int i=0;i<4;i++) v[i] = 0;
	int i =  3;
	while(n){
		v[i--] = n%10;
		n=n/10;
	}
}
bool allzero(vector<int> a){
	for(int i=0;i<=3;i++){
		if(a[i]) return 1;
	}
return 0;
}
string largestTimeFromDigits(vector<int>& a) {
	sort(a);string s= "";
	vector<int> v = {2,3,5,9},zero = {0,0,0,0};
	while(allzero(v)){
		if(check(v,a)){
		s= "";
		for(int i=0;i<4;i++){
			if(i==2) s+=":";
			s+= Tochar(v[i]);
		}
			return s;
	}
	dec(v);
	}
	if(check(v,a)){
		s= "";
		for(int i=0;i<4;i++){
			if(i==2) s+=":";
			s+= Tochar(v[i]);
		}
		}
return s;
        
}
void solve(){
	vector<int> a(4);input(a);
	//cout<<Tochar(4)<<"is displayed in string\n";
	cout<<largestTimeFromDigits(a);
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

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
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<""; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;

#define all(a) a.begin(),a.end()
bool static compare(string a, string b){
	return a+b>b+a;
}
bool allzero(vector<int> &a){
	for(int i:a) 
	if(i!=0) return 0;
	return 1;
}
string largestNumber(vector<int>& nums) {
		 if(allzero(nums)) return "0";
        vector<string> b; 
        for(int x:nums)b.pb(to_string(x));
        sort(all(b),compare);
        //display(b);return"";
        string s="";
        for(string a:b) s+=a;
        return s;	
}
void solve(){
	int n;cin>>n; vi a(n); input(a);
	cout<<largestNumber(a);
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
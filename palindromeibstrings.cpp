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
#define ll long long int
#define ull unsigned ll
using namespace std;
#define numeric(x) (x>='0' && x<='9')
#define alpha(x) ((capital(x) || small(x))?1:0)
#define capital(x) (x>='A' && x<='Z')
#define small(x) (x>='a' && x<='z')
#define check(x) ((alpha(x) || numeric(x))?1:0)
int isPalindrome(string A) {
    string s = A; reverse(A); string str = A;
	//cout<<s<<endl<<A<<endl;
    int n = s.size(),i=0,j=0;
    while(i<n && j<n){
        while(i<n && !check(s[i])) i++;
        while(j<n && !check(str[j])) j++;
        if(i==n && j==n) return 1;
        if(i==n || j==n) return 0;
        if(capital(s[i])) s[i] = s[i] - 'A' +'a';
        if(capital(str[j])) str[j] = str[j] - 'A' +'a';
		
        if(s[i]!=str[j]) return 0; //cout<<s[i]<<" "<<str[j]<<endl;
        i+=1; j+=1;
    }
    return 1;
}

void solve(){
	string s = "A man, a plan, a canal: Panama"; s ='"' +s+ '"'; cout<<s<<endl;
	cout<<isPalindrome(s)<<endl;
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
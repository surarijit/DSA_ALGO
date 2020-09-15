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
 bool help(int a, int b, int num){
        int cnt=0,d;
        while(a){
            d = a%2;
            cnt += (d==1);
            a =a/2;
        }
        while(b){
            d = b%2;
            cnt += (d==1);
            b = b/2;
        }
        if(cnt==num) return 1;
        return 0;
    }
    string tostr(int n){
        if(n==0) return "0";
        string s="";
        while(n){
            int d = n%10;
            s = (char)(d+'0')+s;
            n=n/10;
        }
        return s;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(help(i,j,num)){
                    string s = tostr(i)+(j<10?":0":":") +tostr(j);
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
void solve(){
	int n; cin>>n;
	display(readBinaryWatch(n));
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
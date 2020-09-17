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
#define dist(x,y) (sq(x) + sq(y))
#define sq(x) (x*x)
int work(string s, int &x,int &y){
	 int flag = 0,d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') flag = (flag+1)%4;
            else if(s[i]=='R') flag = (flag-1)%4;
            else{
                if(flag==0) x+=1;
                else if(flag==1) y-=1;
                else if(flag==2) x+=1;
                else y+=1;
            }
			d = max(d,dist(x,y));
        }
	return d;
}
bool isRobotBounded(string instructions) {
       int x=0,y=0,round1 = work(instructions,x,y), round2 = work(instructions,x,y);
       cout<<round1<<" "<<round2<<endl;
       return round2<=round1;
        
    }
void solve(){
	string s;cin>>s;
	cout<<isRobotBounded(s);
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
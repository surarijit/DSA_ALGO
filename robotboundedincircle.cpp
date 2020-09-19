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
          int flag = 0,d=0; map<pair<int,int>, bool> visited;
          visited[{x,y}]=1;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='L') flag -=1;
            else if(s[i]=='R') flag +=1;    
            else{
            	visited[{x,y}] = 1;
                if(flag==0) y+=1;
                else if(flag==1) x+=1;
                else if(flag==2) y-=1;
                else x-=1;
            }
            if(flag==4) flag =0;
            if(flag==-1) flag = 3;
            //cout<<x<<" "<<y<<endl;
        }
        if(visited[{x,y}]) return 1;
	    return flag!=0;
    }
    bool isRobotBounded(string instructions) {
   int x=0,y=0,round1 = work(instructions,x,y);
        return round1;
        
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

// Problem : Rugby
// Contest : Google Coding Competitions - Round H 2020 - Kick Start 2020
// URL : https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff49/000000000043b027
// Memory Limit : 1024 MB
// Time Limit : 20000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define int ll
#define ull unsigned ll
using namespace std;
int ycost(vector<pi>&a, int ypos){
	int c=0,n=a.size();
	rep(i,0,n){
		c+= abs(ypos-a[i].S);
	}
	return c;
}
int ycost2(vector<pi> &a, int ypos){
	int n=a.size(),mini= INF;
	rep(i,0,1010){
		int j=0,k=i,c=0;
		while(j<n){
			int y = a[j].S;
			c+= abs(y-k);
			j++;
		}
		mini =  min(mini,c);
		
	}
	return mini;
}
int xcost(vector<pi>&a,int xpos){
	int n=a.size(),mini=INF;
	rep(i,0,1010){			
		int j=0,k=i,c=0;
		while(j<n){
			int x = a[j].F;
			c+= abs(x-k);
			k++;j++;
		}
		mini = min(mini,c);
	}
	return mini;
}
int solve(){
	int n,ysum=0,xsum=0;cin>>n;
	vector<pi> a(n);
	rep(i,0,n){
		int x,y;cin>>x>>y;
		x+= 500; y+= 500;
		ysum+=y; xsum+=x;
		a[i].F  =x; a[i].S = y;
	}
	int ypos = ysum/n,xpos = xsum/n;
	int yc = ycost2(a,ypos);
	int xc = xcost(a,xpos);
	//cout<<yc<<" "<<xc<<endl;
	return xc+yc;
}
int32_t main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    rep(i,1,t+1){
    	cout<<"Case #"<<i<<": "<<solve()<<endl;
    }
    return 0;
}
//Tell your code to believe in God
//@surcode
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int main()
{
    IOS
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    bool visited[n+1][m+1];
    memset(visited,0,sizeof(visited));
    visited[x][y] = 1;
    cout<<x<<" "<<y<<endl;
    visited[1][y] = 1; int i=1,j;
    cout<<1<<" "<<y<<endl;
    while(i<=n){
    	for(int j=1;j<=m;j++){
    		if(visited[i][j]==0){
    			visited[i][j]=1;
    			cout<<i<<" "<<j<<endl;
    		}
    	}
    	i+=1;
    	if(i<=n)
    	for(int j=m;j;j--){
    		if(visited[i][j]==0){
    			visited[i][j]=1;
    			cout<<i<<" "<<j<<endl;
    		}
    	}
    	i+=1;
    }
    return 0;
}
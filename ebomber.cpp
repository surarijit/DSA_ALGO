/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int index(vector<int> a){
    int maxi=a[0],max_index=0;
    for(int i=0;i<a.size();i++){
        if(a[i]> maxi) {
            maxi= a[i];
            max_index = i;
        }
    }
    return max_index;
}
int solve(){
	int H,W,m,u,v;
    cin>>H>>W>>m;
    vector<vector<int>> a(H,vector<int> (W,0)); vector<int> row(H),colm(W);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        a[u-1][v-1] = 1;
    }
    //for(int i=0;i<H;i++) display(a[i]);
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(a[i][j]){
                colm[j] += 1;
                row[i] += 1;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            int value;
            if(a[i][j]) value = row[i] + colm[j] - 1;
            else value = row[i]+colm[j];
            ans = max(ans,value);
        }
    }
    return ans;
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	printf("%d\n",solve());
    }
    return 0;
}
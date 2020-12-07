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
#define reset(a,n,val) a.clear(),a.resize(n,val)
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
#define F first
#define S second
#define pqq priority_queue
#define sort(a) sort(all(a)) 	
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
    #define bound(i,j) ((i>=0 and j>=0 and i<n and j<m)?1:0)
    #define check(i,j) ( bound(i,j) and a[i][j]==1 and group[i][j]==0)
 int largestIsland(vector<vector<int>>& a) {
        if(a.empty()) return 0;
        int n=a.size(), m=a[0].size(),ans=0,k=0;
        int group[n][m]; memset(group,0,sizeof(group));
        map<int,int> groupsize;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1 and group[i][j]==0)
                {
                    k+=1;
                    queue<pi> q;
                    q.push({i,j});
                    while(!q.empty()){
                        pi x = q.front();q.pop();
                        if(group[x.F][x.S]) continue;
                        group[x.F][x.S]=k;
                        for(int g=-1;g<=1;g++){
                            for(int h=-1;h<=1;h++){
                            	int i=x.F, j=x.S;
                                    if(abs(g)!=abs(h) and check((i+g),(h+j)))
                                        q.push({g+i,h+j});
                            }
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++) 
            if(a[i][j]==1){
                groupsize[group[i][j]]+=1; ans = max(ans,groupsize[group[i][j]]) ;}
        
        for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++) cout<<group[i][j]<<" ";
        	cout<<endl;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==0){
                    set<int> s;int x=0;
                    for(int g=-1;g<=1;g++){
                        for(int h=-1;h<=1;h++){
                            if(abs (g)!=abs(h) and bound(g+i,h+j) and a[g+i][h+j]==1)
                                s.insert(group[g+i][h+j]);
                        }
                    }
                    for(auto it=s.begin();it!=s.end();it++)
                        x+= groupsize[*it];
                    ans = max(x+1,ans);
                }
            }
        }
        return ans;
    }
void solve(){
	int N; cin>>N;
	vector<vi> a(N,vi (N,0));
	for(int i=0;i<N;i++) input(a[i]);
	cout<<largestIsland(a);
}
int32_t main()
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
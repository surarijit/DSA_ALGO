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
using namespace std;
typedef long long ll;

int findMedian(vector<vector<int> > &A) {
   int r=A.size(),c=A[0].size();
    int req=(r*c+1)/2;
    int minm=INT_MAX,maxm=INT_MIN;
    for(int i=0;i<r;i++)
    {
        minm=min(minm,A[i][0]);
        maxm=max(maxm,A[i][c-1]);
    }
    while(minm<maxm)
    {
        int mid=minm+(maxm-minm)/2;
        int place=0;
        for(int i=0;i<r;i++)
         place+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
         
        if(place<req) minm=mid+1;
        else maxm=mid;
    }
    return minm;
}

void solve(){
	int n1,m1; cin>>n1>>m1;
	vector<vi> a(n1,vi (m1)); 
	for(int i=0;i<n1;i++) input(a[i]);
	cout<<findMedian(a);
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
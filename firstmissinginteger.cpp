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
int seggregate(vi &a){
	int n=a.size(),i=0,j=n-1;
	while(i<j){
		while(i<j && a[i]>0) i++;
		while(j>i && a[j]<=0) j--;
		swap(a[i],a[j]);
	}
	return j;
}
int solve(vi &a){
	int j=seggregate(a); 
	if(j==0 ) return (a[j]!=1)?1:2;
	for(int i=0;i<a.size();i++){
		if(a[i]>0 && abs(a[i]) <=a.size() && a[abs(a[i])-1] > 0)
		a[abs(a[i])-1] *= -1;
		//	if(a[abs(a[i])-1]==-948) cout<<a[i]<<endl;
	}
	display(a);
	for(int i=0;i<a.size();i++) {
		if(a[i]>0) return i+1;
	}
	return a.size()+1;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	int n; cin>>n; vi a(n); input(a);
    	cout<<solve(a);
    }
    return 0;
}
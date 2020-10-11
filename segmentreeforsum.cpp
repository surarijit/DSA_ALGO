/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
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
ll tree[SIZE],a[SIZE];
void build(int node,int start,int end){
	if(start==end){
		tree[node] = a[start]; 
		return;
	}
	int mid = (start+end)/2;
	build(node*2,start,mid); build(node*2+1,mid+1,end);
	tree[node] = tree[node*2]+tree[node*2+1];
}
void update(int node, int start,int end, int idx,ll val){
	if(start==end){
		tree[node] = a[idx] = val;
		return;
	}
	int mid = (start+end)/2;
	if(idx>=start and idx<=mid)
	update(node*2,start,mid,idx,val);
	else
	update(node*2+1,mid+1,end,idx,val);
	tree[node] = tree[node*2]+tree[node*2+1];
}
ll query(int node, int start,int end, int l, int r){
	if(r<start or l>end) return 0;
	if(start>=l and end<=r) return tree[node];
	int mid = (start+end)/2;
	return query(node*2,start,mid,l,r)+ query(node*2+1,mid+1,end,l,r);
}
void solve(){
	int n,q;
	cin>>n>>q;
	for(int i=01;i<=n;i++) cin>>a[i];
	build(1,1,n);
	while(q--){
		int ch;cin>>ch;
		if(ch==1){
			int i; ll v;cin>>i>>v;i+=1;
			update(1,1,n,i,v);
		}
		else{
			int l,r;cin>>l>>r;l+=1;
			cout<<query(1,1,n,l,r)<<endl;
		}
	}
	
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
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
void build(int node,int start,int end, int tree[],int a[]){
	if(start==end){
		tree[node] = a[start]; 
		return;
	}
	int mid = (start+end)/2;
	build(node*2,start,mid,tree,a); build(node*2+1,mid+1,end,tree,a);
	tree[node] = min(tree[node*2],tree[node*2+1]);
}
void update(int node, int start,int end, int idx,int val, int tree[], int a[]){
	if(start==end){
		tree[node] = a[idx] = val;
		return;
	}
	int mid = (start+end)/2;
	if(idx>=start and idx<=mid)
	update(node*2,start,mid,idx,val,tree,a);
	else
	update(node*2+1,mid+1,end,idx,val,tree,a);
	tree[node] = min(tree[node*2],tree[node*2+1]);
}
int query(int node, int start,int end, int l, int r, int tree[]){
	if(r<start or l>end) return INF;
	if(start>=l and end<=r) return tree[node];
	int mid = (start+end)/2;
	int p1 = query(node*2,start,mid,l,r,tree);
	int p2 = query(node*2+1,mid+1,end,l,r,tree);
	return min(p1,p2);
}
void solve(){
	int n;cin>>n; int q;cin>>q;
	int tree[SIZE], a[SIZE];
	for(int i=1;i<=n;i++) cin>>a[i];
	build(1,1,n,tree,a);
	while(q--){
		char ch; cin>>ch;
		if(ch=='q'){
			int l,r;cin>>l>>r;
			cout<<query(1,1,n,l,r,tree)<<endl;
		}
		else {
			int val,idx;cin>>idx>>val;
			update(1,1,n,idx,val,tree,a);
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
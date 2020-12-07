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
struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		this->data = x;
		this->left = this->right = NULL;
	}
};
vector<Node*> v;
void inorder(Node *root){
	if(!root) return;
	inorder(root->left);
	v.pb(root);
	inorder(root->right);
}

void solve(){
	int n;cin>>n; vi a(n); input(a);;
	map<int, Node*> ma;
	for(int i=0;i<n;i++){
		if(a[i]==-1) continue;
		ma[i] = new Node(a[i]);
	}
	for(int i=0;i<n;i++){
		if(ma[2*i+1])
		ma[i]->left =  ma[2*i+1];
		if(ma[2*i+2]) 
		ma[i]->right = ma[2*i+2];
	}
	Node *root = ma[0];
	inorder(root);
	v.pb(new Node(0));
	reverse(v);
	v.pb(new Node(0));
	reverse(v);
	for(int i=01;i+1<v.size();i++) cout<<v[i+1]->data+v[i-1]->data<<" ";	
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

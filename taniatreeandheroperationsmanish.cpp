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
#define rep(i,aa1,bb1) for(int i=aa1;i<bb1;i++)
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
#define input(a) {rep(i1,0,a.size()) cin>>a[i1];}
#define display(a) {rep(i1,0,a.size())cout<<a[i1]->color<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
#define red 1
#define black 0
vi parent,num;
struct Node{
	int data,color;
	vector<Node*> adj;
	Node(int y){
		this->color = red;
		this->data = y;
		this->adj.clear();
	}
};
int pre(Node *u){
	int sum=0;
	for(Node *v: u->adj){
		if(parent[u->data] == v->data) continue;
		sum+= pre(v);
	}
	num[u->data]=sum;
	return sum+ (u->color == red);
}
int colorblack(Node *u){
	int sum=0;
		for(Node *v:u->adj){
			if(parent[u->data] == v->data)continue;
			sum+=colorblack(v);
		}
		num[u->data] -= sum;
		int mycolor = 0;
		if(u->color== red) mycolor +=1;
		u->color = black;
		return sum+mycolor;
}
int colored(Node *u){
	int sum=0;
	for(Node *v:u->adj){
		if(parent[u->data]== v->data) continue;
		sum+= colored(v);
	}
	num[u->data] += sum;
	int mycolor = 0;
	if(u->color == black) mycolor +=1;
	u->color = red;
	return sum+mycolor;
}
void solve(){
	int n;cin>>n; parent.resize(n+1); num.resize(n+1);
	map<int, Node*> ma;
	rep(i,1,n+1) ma[i] = new Node(i), parent[i]=i;
	rep(i,1,n) {
		int x,y;cin>>x>>y;
		ma[x]->adj.pb(ma[y]);
		ma[y]->adj.pb(ma[x]);
	}
	queue<Node*> q;
	q.push(ma[1]); 
	while(!q.empty()){
		Node *u = q.front();q.pop();
		for(Node* v: u->adj){
			if(parent[u->data] == v->data)continue;
			parent[v->data]  = u->data;
			q.push(v);
		}
	}
	pre(ma[1]);
	int queries;cin>>queries;
	while(queries--){
		int id,x;
		cin>>id>>x;
		if(id==1){
			Node *u = ma[x];
			int mycolor = u->color;
			colored(u);
			u->color = mycolor;
		}
		else if(id==2){
			Node *u = ma[x];
			int mycolor = u->color;
			colorblack(u);
			u->color = mycolor;
		}
		else cout<<num[ma[x]->data]<<endl;
		
	}
	
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
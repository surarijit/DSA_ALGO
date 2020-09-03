/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0? (a) : -(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define sc(n) scanf("%d\n",&n);
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]->data<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
struct Node{
	int data;
	vector<Node *> adj;
	Node(int x){
		this->data = x;
		adj = {};
	}
};
/*bool check(vector<Node *> a, Node *b){
	for(int i=0;i<a.size();i++){
		if(a[i]==b) return 1;
	}
	return  0;
}*/
void displayadj(Node *head){
	queue<Node *> q; map<Node *,bool> visited;
	q.push(head);
	while(!q.empty()){
		Node *ff = q.front(); q.pop();
		//if(visited[ff]) continue;
		cout<<ff->data<<endl;
		display(ff->adj);
		visited[ff] = 1;
		vector<Node *> a = ff->adj;
		for(int i=0;i<a.size();i++){
			if(!visited[a[i]]){
				q.push(a[i]);
				visited[a[i]] = 1;
			}
		}
	}
}
Node *clonegraph(Node *head){
	map<Node *,Node *> ma; map<Node *,bool> visited;
	queue<Node*> q;
	q.push(head);
	Node* head2 = new Node(head->data); ma[head] = head2;
	while(!q.empty()){
		Node *f = q.front(), *t = ma[f]; q.pop();
		if(visited[f]) continue;
		visited[f] = 1;
		vector<Node *> a = f->adj;
		for(int i=0;i<a.size();i++){
			Node *b;
			if(ma[a[i]]) b = ma[a[i]];
			else b = new Node(a[i]->data);
			ma[a[i]] = b;
			//if(!check(t->adj,b))
			t->adj.pb(b);
			if(!visited[a[i]]) q.push(a[i]);
		}		
	}
	return ma[head];	
}
void solve(){
    Node *root1 = new Node(703);
    Node *root2 = new Node(279); 
    Node *root3 = new Node(43);
    root1->adj.pb(root1); root1->adj.pb(root2); root1->adj.pb(root3);
    root2->adj.pb(root2); root2->adj.pb(root1); root2->adj.pb(root3);
	root3->adj.pb(root1); root3->adj.pb(root2);
	displayadj(root1); cout<<endl<<endl;displayadj(clonegraph(root1));
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
/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define vi vector<int>
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		this->data = x;
		this->next = NULL;
	}
};
void dislist(Node *root){
	while(root){
		cout<<root->data<<" ";
		root = root->next;
	}
	cout<<endl;
}
Node *constructlist(vi a){
	Node *r1=NULL, *ptr = NULL;
	for(int x:a){
		if(!r1) {
			r1 = new Node(x);
			ptr = r1;
		}
		else {
			ptr->next =  new Node(x);
			ptr = ptr->next;
		}
	}
	return r1;
}
Node* reverse(Node *root){
	Node *cur = root, *prev = NULL, *next;
	while(cur){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}
Node *add(Node *r1, Node* r2){
	Node *root=NULL,*ptr=root;;
	r1 = reverse(r1), r2 = reverse(r2);
	int carry = 0;
	while(r1 or r2){
		int x = (r1 ? r1->data :0) + (r2 ? r2->data :0)+ carry;
		carry = x/10;
		x = x%10;
		if(!root) {
			root = new Node(x);
			ptr = root;
		}
		else{
			ptr->next = new Node(x);
			ptr = ptr->next;
		}
		if(r1) r1 = r1->next;
		if(r2) r2 = r2->next;
	}
	while(carry){
		int x = carry%10;
		carry = carry/10;
		ptr->next = new Node(x);
		ptr = ptr->next;
	}
	return reverse(root);
}

void solve(){
	int n,m;cin>>n>>m;
	vi a(n),b(m); input(a); input(b);
	Node *root1 = constructlist(a), *root2 = constructlist(b);
	//dislist(root1); dislist(root2);
	dislist(add(root1,root2));
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
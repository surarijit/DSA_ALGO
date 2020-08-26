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
#define pi pair<int,Node*>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]; cout<<" "; }
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
struct Node
{
    int data;
    Node *left,*right;
    Node(int x){
        this->data = x;
        this->left = this->right = NULL;
    }

};
void preorder(Node* root, string a)
{
    if(!root) return;
    preorder(root->left,a+'0');
    preorder(root->right,a+'1');
    if(!root->left && !root->right) {cout<<a<<" ";return;}
}
void solve(){
	string aplha;
    cin>>aplha;
    vector<int> freq(aplha.size());
    input(freq);
    priority_queue<pi,vector<pi>,greater<pi>> pq;
    for(int i=0;i<freq.size();i++) {
        Node *t = new Node(freq[i]);
        pq.push({t->data,t});
    }
    while(pq.size()>1){
        pi a = pq.top(); pq.pop();
        pi b = pq.top(); pq.pop();
        Node *t = new Node(a.first+b.first);
        t->left = a.second;
        t->right = b.second;
        pq.push({t->data,t});
    }
    preorder(pq.top().second,"");
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
        cout<<endl;
    }
    return 0;
}
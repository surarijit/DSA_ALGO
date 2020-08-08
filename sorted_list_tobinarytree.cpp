//Tell your code to believe in God
//@surcode
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define data val
using namespace std;
typedef long long ll;
struct TreeNode{
    TreeNode *left,*right;
    int val;
    TreeNode(int x){
        this->val = x;
        this->left = this->right = NULL;
    }
};

struct ListNode{
    ListNode *next;
    int val;
    ListNode(int x){
        this->val = x;
        this->next = NULL;
    }
};

ListNode *make_list(vector<int> a){
    ListNode *head = NULL, *pre = NULL;
    for(int i=0;i<a.size();i++){
        if(!i){
            head = new ListNode(a[i]);
            pre =head;
        }
        else{
            pre->next = new ListNode(a[i]);
            pre = pre->next;
        }
    }
    return head;
}
vector<int> make_array_from_list(ListNode *head){
    vector<int> a;
    while(head){
        a.pb(head->data);
        head = head->next;
    }
    return a;
}
TreeNode *BSTfromlist(ListNode *head){
    vector<int> a = make_array_from_list(head);
    int n = a.size(), mid = n/2;
    TreeNode *root = new TreeNode(a[mid]), *righttree = root, *lefttree= root;
    for(int i = mid+1;i<n;i++){
        righttree->right = new TreeNode(a[i]);
        righttree = righttree->right; 
    }
    for(int i=mid-1;i>=0;i--){
        lefttree->left = new TreeNode(a[i]);
        lefttree = lefttree->left;
    }
    return root;
}
void inorder(TreeNode *root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int balanced_tree(TreeNode *root, bool &flag){
    if(!root || !flag) return 0;
    int x = balanced_tree(root->left,flag);
    int y = balanced_tree(root->right,flag);
    if(abs(x-y)>1) flag=0;
    return max(x,y)+1;
}
int main()
{
    IOS
    vector<int> a = { 90 ,228, 245, 290,397, 471, 572, 649, 688, 710, 823, 829, 830 ,859, 932, 939, 962 };
    inorder(BSTfromlist(make_list(a)));   
    cout<<endl; 
    bool flag = 1;
    balanced_tree(BSTfromlist(make_list(a)),flag);
    cout<<(flag?"Balanced":"Notbalanced")<<endl;
    return 0;
}
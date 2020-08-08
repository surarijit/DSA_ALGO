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
#define Node ListNode
using namespace std;
typedef long long ll;
struct Node {
      int data;
      ListNode *next;
      ListNode(int x) : data(x), next(NULL) {}
 };
 Node *make_list(vector<int> a){
     int i;
     Node *head =NULL, *pre = head;
     for(i=0;i<a.size();i++){
         if(!i) head = new Node(a[i]), pre = head;
         else pre->next = new Node(a[i]), pre = pre->next;
     }
     return head;
 }
 void display_list(Node *cur){
     while(cur){
         cout<<cur->data<<" ";
         cur = cur->next;
     }
     cout<<endl;
 }
 Node *reverse(Node *head){
     Node *cur = head, *prev = NULL, *next;
     while(cur){
         next = cur->next;
         cur->next = prev;
         prev = cur;
         cur = next;
     }
     return prev;
 }
 Node* merge(Node *a, Node *b,bool flag){
     if(!a && !b) return nullptr;
     if(!a) return b;
     if(!b) return a;
     if(flag) {
         a->next = merge(a->next,b,!flag);
         return a;
     }
     b->next = merge(a,b->next,!flag);
     return b;
 }
 Node *soln(Node *A){
     Node *slow = A, *fast = slow->next, *pre = slow;
     while(fast){
         pre = slow;
         slow = slow->next;
         fast = fast->next->next;
         if(fast)
         cout<<pre->data<<" "<<slow->data<<" "<<fast->data<<" ";
     }
     if(pre)
    pre->next = nullptr;
    else cout<<"Yes";
    slow = reverse(slow);
    //display_list(A);display_list(slow);
    return merge(A,slow,1);
 }
int main()
{
    IOS
    vector<int> a = {1,2,3,4,5};
    Node *head = make_list(a);
    display_list(head);
    display_list(soln(head));
    return 0;
}
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
 class NumArray {
public:
    int tree[SIZE],a[SIZE],n;
    NumArray(vector<int>& nums) {
         n=nums.size();
        for(int i=1;i<=n;i++) a[i] = nums[i-1];
        build(1,1,n);
    }
    
    void update(int i, int val) {
        update(1,1,n,1+i,val);
    }
    
    int sumRange(int i, int j) {
        return query(1,1,n,i+1,j+1);
    }
    
    void build(int node, int start, int end){
        if(start>end) return;
        if(start==end){
            tree[node] = a[start]; return;
        }
        int mid = (start+end)/2;
        build(2*node,start,mid); build(2*node+1,mid+1,end);
        tree[node] = tree[node*2]+tree[node*2+1];
    }
    void update(int node,int start,int end, int idx,int val){
        if(start>end) return;
            if(start==end){
                tree[node] = a[idx] = val; return;
            }
        int mid = (start+end)/2;
        if(idx<=mid and idx>=start) update(node*2,start,mid,idx,val);
        else update(node*2+1,mid+1,end,idx,val);
        tree[node] = tree[node*2]+tree[node*2+1];
    }
    int query(int node,int start,int end, int l, int r){
        if(start>end)return 0;
        if(r < start or l >end)return 0;
        if(l <=start and end<=r) return tree[node];
        int mid = (start+end)/2;
        return query(node*2,start,mid,l,r) + query(node*2+1,mid+1,end, l,r);
    }
    
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
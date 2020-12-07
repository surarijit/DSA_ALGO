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
#define display(a) {rep(i1,0,a.size())cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;

#define 
#define hasleftchild(x) ((x*2+1 < size)?1:0)
#define hasrightchild(x) ((x*2+2< size)?1:0)
#define hasparent(x) (x>0)
int size=0;
int item[SIZE];
int top(){
	if(size>0) return item[size-1];
	return -1;
}

void swap(int x, int y){
	int temp  = item[x];
	item[x] = item[y];
	item[y] = temp;
}

void heapifyDown(){
	int index = 0;
	while(hasleftchild(index)){
		int smallerchildindex = leftchildindex(index);
		if(hasrightchild(index) and item[rightchildindex(index)] < item[smallerchildindex])
		smallerchildindex =  rightchildindex(index);
		if(item[index] < item[smallerchildindex]) break;
		swap(index, smallerchildindex);
		index = smallerchildindex;
	}
}

void heapifyUp(){
	int index  = size-1;
	while(hasparent(index) and item[parentindex(index)] > item[index]){
		swap(index,parentindex(index));
		index = parentindex[index];		
	}
}

void pop(){
	if(size==0)return;
	item[0] = item[size-1];
	size--;
	heapifyDown();
}

void push(int x){
	item[size] = x;
	size++;
	heapifyUP();
}




void solve(){
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
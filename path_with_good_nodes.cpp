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
using namespace std;
typedef long long ll;

int work(int x, vector<int> &A,map<int,vector<int>> &ma, int cnt, bool visited[]){
    vector<int> a = ma[x];
    if(a.empty()){
        if(cnt>=0) return 1;
        else return 0;
    }
    int ans = 0;
    for(int i=0;i<a.size();i++){
        if(!visited[a[i]]){
        visited[a[i]]=1;
        if(A[a[i]])
        ans += work(a[i],A,ma,cnt-1,visited);
        else ans = work(a[i],A,ma,cnt,visited);
        }
    }
    return ans;
}
int solve(vector<int> &A, vector<vector<int> > &B, int C) {
    int n = A.size(); bool visited[n+1];
    memset(visited,0,sizeof(visited)); visited[1] =1 ;
    map<int,vector<int>> ma;
    for(int i=0;i<B.size();i++) {
        if(B[i][1] < B[i][0]) swap(B[i][1],B[i][0]);
        ma[B[i][0]].push_back(B[i][1]);
       //ma[B[i][1]].push_back(B[i][0]);
    }
    return work(1,A,ma,C,visited);
}
int main()
{
    IOS
    vector<int> A = {0, 1, 0, 1, 1, 1};
    vector<vector<int>> B = {  {1, 2},
        {1, 5},
        {1, 6},
        {2, 3},
        {2, 4},
     };
    int C = 1;
    cout<<solve(A,B,C)<<endl;

    return 0;
}
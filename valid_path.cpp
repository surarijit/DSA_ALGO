//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define pow(a) (a*a)
#define dist(x,y,a,b) (pow(x-a)+pow(y-b))
#define check(a,b) (a>=0 && b>=0 && a<=x && b<=y)
#define SIZE 1200
using namespace std;
typedef long long ll;
bool visited[SIZE][SIZE];
bool work(int i, int j, int &x, int &y)
{
    if(i==x && j== y) return 1;
    if(check(i,j) && visited[i][j]){
        visited[i][j] = 0;
        for(int a = -1;a<=1;a++)
        {
            for(int b =-1;b<=1;b++)
            if(work(a+i,b+j,x,y)) return 1;
        }
    }
    return 0;

}
string solve(int x, int y, int n, int r, vector<int> &a, vector<int> &b)
{
    int i,j,k;
    memset(visited,1,sizeof(visited));
    if(r){
    for(k=0;k<a.size();k++){
        visited[a[k]][b[k]] = 0;
    }
    for(i=0;i<=x;i++)  
    {
        for(j=0;j<=y;j++)
        {
            bool flag =1;
            if(visited[i][j])
            for(k=0;k<n && flag;k++){
                if(dist(i,j,a[k],b[k])<=pow(r)) flag = 0;
            }
            visited[i][j] = flag;
        }
    }  
    }
    return work(0,0,x,y)? "YES\n" : "NO\n";
}
int main()
{
    int x = 2, y = 3, N = 1, R = 1;
    x=41,y=67,N=5,R=0;
    x = 61,y=91,N=6,R=2;
    vector<int> A = { 53, 42, 27, 34, 58, 29 }, B = {16, 54, 33, 40, 30, 23 }; N= A.size();
    cout<<solve(x,y,N,R,A,B);
    return 0;
}

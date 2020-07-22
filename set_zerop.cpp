//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define all(a) a.begin(),a.end()
#define n b.size()
#define m b[0].size()
#define push_back pb
using namespace std;
typedef long long ll;
void display(vector<vector<int>> b)
{
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++) cout<<b[i][j]<<" ";
        cout<<endl;
    }
}
void solution(vector<vector<int>> &b)
{
    unordered_map<int,bool> ma_rows,ma_columns;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i][j]==0) {
                ma_rows[i] = 1;
                ma_columns[j] = 1;
            }
            
        }
    }    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ma_rows[i] || ma_columns[j])
            b[i][j] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> a = {   {1, 0, 1},
        {1, 1, 1}, 
        {1, 1, 1}   };
    display(a);
    cout<<endl;
    solution(a);
    display(a);
    return 0;
}
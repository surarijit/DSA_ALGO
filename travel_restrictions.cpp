//Tell your code to believe in God
#include<bits/stdc++.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
using namespace std;
typedef long long ll;
int main()
{
    int test,t;
    string ch;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        int n,i,j;
        cin>>n;
        vector<bool> I(n+1,0),O(n+1,0);
        cin>>ch;
        for(i=1;i<=n;i++) {
            O[i] = (ch[i-1]=='Y'?1:0);
        }
        cin>>ch;
        for(i=1;i<=n;i++) {
            I[i] = (ch[i-1]=='Y'?1:0);
        }
        cout<<endl;
        int a[1+n][1+n];
        char P[n][n];
        memset(a,0,sizeof(a));
        for(i=1;i<=n;i++){
            a[i][i] = 1;
            if(I[i]){
                if(i+1<=n && O[i+1]) a[i][i+1] = 1;
                if(i-1>=1 && O[i-1]) a[i][i-1] = 1;
            }
        }
        for(i=1;i<=n;i++)
        {
            bool flag = 0;
            if(i+1<=n && !a[i][i+1]) flag =1;
            for(j=i+1;j+1<=n;j++)
            {
                if(flag) a[i][j+1] = 0;
                else
                if(a[j][j+1])
                a[i][j+1] = 1;
                else{
                    a[i][j+1] = 0;
                    flag = 1;
                }
            }
            flag = 0;
            if(i-1>=1 && !a[i][i-1]) flag = 1;
            for(j=i-1;j-1>=1;j--)
            {
                if(flag) a[i][j-1] = 0;
                else
                if(a[j][j-1]) a[i][j-1] = 1;
                else {
                    a[i][j-1] = 0;
                    flag = 1;
                }
            }
        }
        cout<<"Case #"<<t<<":";
        for(i=1;i<=n;i++)
        {
            cout<<endl;
            for(j=1;j<=n;j++)
            {
                P[i-1][j-1] = (a[i][j]?'Y':'N');
                cout<<P[i-1][j-1];
            }
        }
    }
    cout<<endl;
    return 0;
}

// Problem : C. The Hard Work of Paparazzi
// Contest : Codeforces - Codeforces Global Round 11
// URL : https://codeforces.com/contest/1427/problem/C
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#include<cstring>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
#define vi vector<int>
#define INF 0x3f3f3f3f
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
const int MAXN = 1e5 + 100;
int t[MAXN];
int x[MAXN], y[MAXN];
int ans[MAXN];
int max_ans[MAXN];
 
int main() {
  
 
    x[0] = 1, y[0] = 1;
 
    int R, N;
    cin >> R >> N;
    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> x[i] >> y[i];
        ans[i] = -1e9;
        for (int j = max(i-2*R, 0); j < i; j++) {
            if (abs(x[i]-x[j]) + abs(y[i]-y[j]) <= t[i]-t[j])
                ans[i] = max(ans[i], 1 + ans[j]);
        }
        if (i > 2*R) ans[i] = max(ans[i], 1 + max_ans[i-2*R]);
 
        max_ans[i] = max(ans[i], max_ans[i-1]);
    }
    cout << max_ans[N] << "\n";
}
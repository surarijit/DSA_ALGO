/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define me(u,v,w) {adj[u].pb({w,v}; adj[v].pb({w,u}));}
#define priorq priority_queue
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;

int wordladder(string first, string last, vector<string> &v){
	 unordered_set<string>dict(v.begin(), v.end());
    if(dict.find(last) == dict.end())return -1;
    queue<string>q;
    q.push(first);
    int count = 1;
    while(!q.empty()){
        int sz = q.size();
        for(int i = 0; i < sz; ++i){
            string s = q.front(); q.pop();
            if(s == last)return count;
            for(int i = 0; i < s.size(); ++i){
                char ch = s[i];
                for(char c = 'a'; c <= 'z'; ++c){
                    s[i] = c;
                    if(dict.find(s) != dict.end()){
                        q.push(s);
                        dict.erase(s);
                    }
                }
                s[i] = ch;
            }
        }
        count++;
    }
    return count;
    
}


}
void solve(){
	string a = "hit", b = "cog";
	vector<string> c = {"hot", "dot", "dog", "lot", "log"};
	printf("%d\n",wordladder(a,b,c));
}
int main()
{
    IOS
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}

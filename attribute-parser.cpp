/*	
TELL YOUR CODE TO START BELIEVING IN GOD!!
THEY HATE US BECAUSE THEY AIN'T US
	ARIJIT SUR 
	@duke_knight
	@surcode
	IIT ISM 
 WORK SO HARD THAT YOUR IDOL BECOMES YOUR COMPETITOR 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define pb push_back
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i=0;i<a.size();i++) cin>>a[i];}
#define display(a) {for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
#define ff q.front();
string add(queue<string> q){
    string s = "";
    while(!q.empty()){
        s+= ff;
        q.pop();
    }
    return s;
}
void solve(){
	int n,test;
    queue<string> q;
    string s;
    vector<string> tag_name, attribute_name, attribute_value;
    cin>>n>>test;
    while(n--){
        cin>>s;
        if(s[1]=='/')
        {
            q.pop();
        }
        else
        {
            string tag = "",temp,value="",name;
            for(int i=1;i<s.size();i++) if(s[i]!='>')tag += s[i];
            q.push(tag);
            tag_name.pb(add(q));
            if(s[s.size()-1]=='>'){
                attribute_name.pb("cr7ms10");
                attribute_value.pb("cr7ms10");
            }
            else
            {
            cin>>name;
            attribute_name.pb(name);
            cin>>temp;
            cin>>temp;
            for(int i=1;i<temp.size()-2;i++) value += temp[i];
            attribute_value.pb(value);
            }

        }
    }
    //display(tag_name);display(attribute_name);display(attribute_value);
    while(test--){
        string s,key="",index="";
        cin>>s;
        int i=0;
        while(s[i]!='\0' && s[i]!='~'){
            if(s[i]!='.') 
            key += s[i];
            i++;
        }
        if(s[i]=='\0') {
            cout<<"Not Found!"<<endl;
            continue;
        }
        i++;
        while(s[i]!='\0'){
            index += s[i];
            i++;
        }
        bool flag = 0;
        for(int i=0;!flag && i<tag_name.size();i++){
            if(key==tag_name[i] && index == attribute_name[i]){
                cout<<attribute_value[i]<<endl;
                flag = 1;
            }
        }
        if(!flag)
        cout<<"Not Found!"<<endl;
    }
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
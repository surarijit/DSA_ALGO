#include<bits/stdc++.h>
#define int long long
#define F first
#define S second
#define pb push_back
#define pbb pair<bool,bool>
#define pi pair<int,int>


using namespace std;

map<string, vector<vector<pbb>>> mp;

#define rep(i,aaa,bbb) for(int i=aaa;i<bbb;i++)
#define ma mp
#define returnstring(x) x

vector<string> inputsplit(string &s){
    
    string word = "";
    vector<string> t;
    rep(i,0,s.size()){
        if(s[i]==' '){
            if(word.size() > 0 ) t.pb(word);
            word = "";
        }
        else word += s[i];
    }
    if(word.size() > 0 ) t.pb(word);
    return returnstring(t);
}


void reserveseat(vector<string> &v){
    //Seats to be reserved for screen

    string screen_name = v[1];
    if(mp.find(screen_name) == mp.end()){
        cout<<"failure"<<endl; return;
    }

    int row = stoi(v[2])-1;
    if(row >= ma[screen_name].size()) cout<<"failure"<<endl;

    bool check = 1;
    rep(i,3,v.size()){
        int seat = stoi(v[i])-1;
        if(seat >= mp[screen_name][row].size()) check = 0;
        if(mp[screen_name][row][seat].F == 1) check = 0;
       
    }
     if(!check){
            cout<<"failure";cout<<endl;return;
        }

    rep(i,3,v.size()){
        int seat = stoi(v[i])-1;
        mp[screen_name][row][seat].F = 1;
    }
    cout<<"success"<<endl;
}



void addScreen(vector<string> &v){
    /* Add new screen to data structure mp */
    string namescreen = v[1];
    int row = stoi(v[2]);
    int seats = stoi(v[3]);
    vector<bool> aisles(seats,0);
    rep(i,4,v.size()) aisles[0+stoi(v[i])-1] = 1;

    if(mp.find(namescreen) != mp.end()) {
        cout<<"failure";cout<<endl;return;
    }
    vector<vector<pbb>> hall;
    rep(i,0,row){
        vector<pbb> temp;
        rep(j,0,seats){
            if(aisles[j]) temp.pb({0,1});
            else temp.pb({0,0});
        }
        hall.pb(temp);
    }
    cout<<"success"<<endl;
    mp[namescreen] = hall;
    return;
}

void suggestcontigous(vector<string> &v){
    //Suggest contigous seats in a screen

    string screen_name = v[1];
    if(ma.find(screen_name) == ma.end()) {
        cout<<"none"<<endl;return;
    }

    int cnt = stoi(v[2]), row = stoi(v[3])-1;
    if(row>= ma[screen_name].size()){
        cout<<"none"<<endl;
        return;
    }

    int seat = stoi(v[4])-1;

    //cout<<row<<" "<<seat<<" "<<cnt<<endl; print();

    if(seat >= ma[screen_name][row].size()){
        cout<<"none"<<endl;
        return;
    }

    if(ma[screen_name][row][seat].F) {
        cout<<"none"<<endl;return;
    }
    bool avl1 = 1;
    if(seat >= cnt-1){
        rep(i,1,cnt){
            int s = seat - i;
            if( ma[screen_name][row][s].F || ma[screen_name][row][s].S) avl1 = 0;
        }
    }
    else avl1 = false;

    bool avl2 = 1;
    if(seat + cnt < ma[screen_name][row].size()) {
        rep(i,1,cnt){
            int s = seat +i;
            if(ma[screen_name][row][s].F  || ma[screen_name][row][s].S ) avl2 = 0;
        }
    }
    else avl2 = 0;

    if( !avl1 and !avl2){
        cout<<"none"<<endl;
        return;
    }

    if(avl1){
        for(int i=cnt-1;i>=0;i--){
            cout<<(seat+1-i)<<" ";
        }
        cout<<endl;return;
    }
    else {
        rep(i,0,cnt) cout<<(seat+i+1)<<" ";
        cout<<endl; return;
    }
}


void getunreserved(vector<string> &v){
    //getting unreserved seats for a screen

    string screen_name = v[1];
    if(mp.find(screen_name)== mp.end()){
        cout<<"none"<<endl;
        return;
    }
    int row = stoi(v[2])-1;
    if(ma[screen_name].size() <= row) {
        cout<<"none"<<endl;return;
    }
    rep(i,0,ma[screen_name][row].size()) {
        if(ma[screen_name][row][i].F==0) cout<<(i+1)<<" ";
    }
    cout<<endl;
}

void printtheatre(){
    for(auto c: mp){
        cout<<c.F<<"->"<<endl;
        rep(i,0,c.S.size()){
            rep(j,0,c.S[0].size()) 
            cout<<"("<<c.S[i][j].F<<", "<<c.S[i][j].S<<") ";
            cout<<"\n";
        }
    }
}


int32_t main(){
    int N,n; cin>>n;N=n;
    cin.ignore();
    string S;
    while(N--){
        getline(cin,S);
        vector<string> v = inputsplit(S);

        if(v[0] == "add-screen") addScreen(v);

        else if(v[0]== "get-unreserved-seats") getunreserved(v);

        else if(v[0] == "reserve-seat") reserveseat(v);

        
        else suggestcontigous(v);

    }
    return 0;
}











#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define int long long
#define F first
#define S second

typedef pair<bool, bool> pbb;

map<string, vector<vector<pbb>>> mp;

vector<string> split(string& S){
    string word = "";
    vector<string> t;
    for(int i=0; i<S.size(); i++){
        if(S[i] == ' '){
            if(word.size() > 0)
                t.pb(word);
            word = "";
        }
        else{
            word += S[i];
        }
    }
    if(word.size() > 0) t.pb(word);

    return t;
}

void printTheatre(){
    for(auto c : mp){
        cout<<c.F<<"->\n";
        for(int i=0; i<c.S.size(); i++){
            for(int j=0; j<c.S[0].size(); j++){
                cout<<"("<<c.S[i][j].F<<", "<<c.S[i][j].S<<") ";
            }
            cout<<endl;
        }
    }
}

void addScreen(vector<string>& v){
    /*
    * Add new screen to mp data structure.
    */

    string screen_name = v[1];
    int row = stoi(v[2]);
    int seats = stoi(v[3]);


    vector<bool> aisles(seats, false);
    for(int i=4; i<v.size(); i++){
        aisles[stoi(v[i])-1] = true;
    }

    if(mp.find(screen_name) != mp.end()){
        cout<<"failure"<<endl;
        return;
    }

    vector<vector<pbb>> hall;
    for(int i=0; i<row; i++){
        vector<pbb> tmp;
        for(int j=0; j<seats; j++){
            if(aisles[j]){
                tmp.pb({false, true});
            }
            else{
                tmp.pb({false, false});
            }
        }
        hall.pb(tmp);
    }
    mp[screen_name] = hall;

    cout<<"success"<<endl;
}

void reserveSeat(vector<string>& v){
    /*
    * Reserve seats for a screen.
    */
    
    string screen_name = v[1];
    
    if(mp.find(screen_name) == mp.end()){
        cout<<"failure"<<endl;
        return;
    }
    
    int row = stoi(v[2])-1;
    if(row >= mp[screen_name].size()){
        cout<<"failure"<<endl;
    }

    bool check = true;

    for(int i=3; i<v.size(); i++){
        int seat = stoi(v[i])-1;
        if(seat >= mp[screen_name][row].size()){
            check = false;
        }
        if(mp[screen_name][row][seat].F == true){
            check = false;
        }
    }

    if(!check){
        cout<<"failure"<<endl;
        return;
    }

    for(int i=3; i<v.size(); i++){
        int seat = stoi(v[i]) - 1;
        mp[screen_name][row][seat].F = true;
    }

    cout<<"success"<<endl;
}

void getUnreserved(vector<string>& v){
    /*
    * Get Unreserved seats for a screen.
    */
    
    string screen_name = v[1];
    if(mp.find(screen_name) == mp.end()){
        cout<<"none"<<endl;
        return;
    }

    int row = stoi(v[2])-1;
    if(mp[screen_name].size() <= row){
        cout<<"none"<<endl;
        return;
    }

    for(int i=0; i<mp[screen_name][row].size(); i++){
        if(mp[screen_name][row][i].F == false){
            cout<<(i+1)<<" ";
        }
    }
    cout<<endl;
}

void suggestContigous(vector<string>& v){
    /*
    * Suggest contigous seats in a screen.
    */

    string screen_name = v[1];
    if(mp.find(screen_name) == mp.end()){
        cout<<"none"<<endl;
        return;
    }

    int cnt = stoi(v[2]);

    int row = stoi(v[3])-1;
    if(row >= mp[screen_name].size()){
        cout<<"none"<<endl;
        return;
    }


    int seat = stoi(v[4])-1;
    // cout<<row<<" "<<seat<<" "<<cnt<<endl;
    // print();

    if(seat >= mp[screen_name][row].size()){
        cout<<"none"<<endl;
        return;
    }

    if(mp[screen_name][row][seat].F == true){
        cout<<"none"<<endl;
        return;
    }

    bool avl1 = true;
    if(seat - cnt >= -1){
        for(int i=1; i<cnt; i++){
            int s = seat - i;
            if(mp[screen_name][row][s].F == true || mp[screen_name][row][s].S == true){
                avl1 = false;
            }
        }
    }
    else{
        avl1 = false;
    }

    bool avl2 = true;
    if(seat + cnt < mp[screen_name][row].size()){
        for(int i=1; i<cnt; i++){
            int s = seat + i;
            if(mp[screen_name][row][s].F == true || mp[screen_name][row][s].S == true){
                avl2 = false;
            }
        }
    }
    else{
        avl2 = false;
    }


    if(avl1 == false && avl2 == false){
        cout<<"none"<<endl;
        return;
    }

    if(avl1){
        for(int i=cnt-1; i>=0; i--){
            cout<<(seat-i+1)<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        for(int i=0; i<cnt; i++){
            cout<<(seat+i+1)<<" ";
        }
        cout<<endl;
        return;
    }

}

signed main(){
    int n;
    cin>>n;
    cin.ignore();

    string S;
    while(n--){
        getline(cin, S);

        vector<string> v = split(S);

        if(v[0] == "add-screen"){
            addScreen(v);
        }
        else if(v[0] == "reserve-seat"){
            reserveSeat(v);
        }
        else if(v[0] == "get-unreserved-seats"){
            getUnreserved(v);
        }
        else{
            suggestContigous(v);
        }
    }

    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                
}                                                                               
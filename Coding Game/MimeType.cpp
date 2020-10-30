#include <bits/stdc++.h>

using namespace std;

int main(){

    map<string, string> map;
    int n, q; 
    cin >> n >> q;
    string ext, form;
    for (int i = 0; i < n; i++){
        cin >> ext >> form;
        map[ext] = form;
    }
    for (int i = 0; i < q; i++) {
        string name;
        getline(cin, name); 
        i = name.length()-1;
        while( i >= 0 && name[i] != '.' ){
            i--;
        }
        cout << name.substr(i+1) << endl;
        if(i >= 0){
            
            //cout << map[name.substr(i+1)]<< endl;
        }else{
            //cout << "UNKNOWN" << endl;
        }
        
    }
    for(auto x : map){
        cout << x.first << " " << x.second << endl;  
    }
}
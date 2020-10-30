#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;

int main(){

    map<string, string> map;
    int n, q; 
    cin >> n >> q;
    string ext, form, c;
    for (int i = 0; i < n; i++){
        cin >> ext >> form;
        map[ext] = form;
    }
    for (int i = 0; i < q; i++) {
        string name;
        cin >> name;
        cout << name << " ";
        int j = name.length()-1;
        while( j >= 0 && name[j] != '.' ){
            j--;
        }
        c = name.substr(j+1);
        for(int k = 0; k < c.length(); k++){
            c[k] = tolower(c[k]);
        }
        cout << c << " ";
        if(j >= 0 && map[c] != ""){
            cout << map[c]<< endl;
        }else{
            cout << "UNKNOWN" << endl;
        }
        
    }
}
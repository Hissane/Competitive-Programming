#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    map<string, string> map;
    int n; // Number of elements which make up the association table.
    cin >> n; cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q; cin.ignore();
    string ext, form;
    for (int i = 0; i < n; i++) {
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
        //cout << name.substr(i+1) << endl;
        if(i >= 0){
            
            cout << map[name.substr(i+1)]<< endl;
        }else{
            cout << "UNKNOWN" << endl;
        }
        
    }
}
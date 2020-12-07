#include <bits/stdc++.h>

using namespace std;



int main(){
    freopen("text.in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s; 
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n-1; i++){
        getline(cin, s); 
        string s1 = "";
        for(int j = 0; j < s.length(); j++){
            if(s[j] != ' '){
                s1 += s[j];
            }
        }
        cout << s1 << endl;
    }
    getline(cin, s); 
        string s1 = "";
        for(int j = 0; j < s.length(); j++){
            if(s[j] != ' '){
                s1 += s[j];
            }
        }
        cout << s1;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("citizen.in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; 
    cin >> n >> m; 
    map<string, int> map;
    string s, c;
    for(int i = 0; i < n; i++){
        cin >> s;
        map[s] = 1;
    }
    for(int i = 0; i < m; i++){
        cin >> c;
        if(map[c]){
            cout << "YES";
        }else{
            cout << "NO"; 
        }
        if(i != m-1){
            cout << endl;
        }
    }

    return 0;
}
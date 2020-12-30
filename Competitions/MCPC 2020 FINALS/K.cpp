#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("string.in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, val;
    string s;
    cin >> t; 
    for(int i = 0; i < t; i++){
    	cin >> n >> s;
        int res = 0;
        map<char, int> map;
        for(int j = 0; j < n; j++){
            map[s[j]]++;
        }
        for(auto x : map){
            if(x.second > res){
                res = x.second;
            }
        }
        res  = n - res;
        cout << res << endl;
    } 
    return 0;
}
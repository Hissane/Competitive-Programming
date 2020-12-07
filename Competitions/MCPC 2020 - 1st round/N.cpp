#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("penalty.in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t; 
    int res, n, m;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        res = m + (n-1)*20; 
        cout << res; 
        if(i != t-1){
            cout << endl;
        }
    }
    return 0;
}
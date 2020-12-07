#include <bits/stdc++.h>

using namespace std;

#define N 1000000007L

long long expo(long long b, long long e) { 
    if (e == 0) 
        return 1; 
    if (e == 1) 
        return b % N; 
    long long p = expo(b, e / 2); 
    p = (p * p) % N; 
    if (e % 2 == 0) 
        return p; 
    else
        return ((b % N) * p) % N; 
} 

int main(){
    freopen("earnings.in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t; 
    cin >> t; 
    long long res, n, m, o, steps;
    for(int i = 0; i < t; i++){
        cin >> m >> n >> o;
        cin >> steps;
        res = expo(2,steps)*(m+n+o)%N;
        cout << res; 
        if(i != t-1){
            cout << endl;
        }
    }
    return 0;
}
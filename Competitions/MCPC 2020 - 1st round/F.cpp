#include <bits/stdc++.h>

using namespace std;

#define p 1000000009L

long long modFact(long long n) 
{ 
    if (n >= p) 
        return 0; 
  
    long long result = 1; 
    for (long long i = 1; i <= n; i++) 
        result = (result * i) % p; 
  
    return result; 
}

int main(){
    freopen("balls.in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t; 
    long long n, val, res;
    for(long long i = 0; i < t; i++){
        cin >> n;
        map<long long, long long> map;
        for(long long j = 0; j < n; j++){
            cin >> val;
            map[val]++;
        }
        res = modFact(map.size());
        //cout << res <<" ";
        long long sum = 0;
        for(auto x : map){
            if(x.second > 1){
                sum = (sum%p + modFact(x.second))%p;
            }
        }
        if(sum){
            res = (res * sum%p)%p;
        }
        //cout << sum <<" ";
        cout << res;
        if(i != t-1){
            cout << endl;
        }
    }
    return 0;
}
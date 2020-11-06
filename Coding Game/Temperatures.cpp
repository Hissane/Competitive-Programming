#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n = 0, t, val; 
    cin >> n >> t;
    for (int i = 1; i < n; i++) { 
        cin >> val; cin.ignore();
        if(abs(val) < abs(t)){
            t = val;
        }else if(abs(val) == abs(t)){
            t = val > t ? val : t;
        }
    }
    if(n != 0){
        cout << t << endl;
    }else{
        cout << 0 << endl;
    }

    
}
#include <bits/stdc++.h>

using namespace std;

int arr[1000006];

string decompose(int val, set<int> s){
    if(val < 3){
        return "NO";
    }
    if(s.find(val) != s.end()){
        return "YES";
    }else{
        auto it = s.lower_bound(val);
        it--;
        //cout << "iterator : " << (*it)<<endl;
        return decompose(val - (*it), s);
    }
}

int main(){
    freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t; 
    set<int> s;
    arr[2] = 3;
    s.insert(3);

    for(int i = 3; i < 1000006; i++){
        arr[i] = i + arr[i-1];
        s.insert(arr[i]);
    }

    for(int i = 0; i < t; i++){
        cin >> n ;
        if(s.find(n) != s.end()){
            cout << "YES"<< endl;
            
        }else{
            cout << decompose(n, s) <<endl;
        }
    } 
    return 0;
#include <bits/stdc++.h>

using namespace std;

int arr[1000006];

string decompose(int val, set<int> s){
    if(val < 3){
        return "NO";
    }
    if(s.find(val) != s.end()){
        return "YES";
    }else{
        auto it = s.lower_bound(val);
        it--;
        //cout << "iterator : " << (*it)<<endl;
        return decompose(val - (*it), s);
    }
}

int main(){
    freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t; 
    set<int> s;
    arr[2] = 3;
    s.insert(3);

    for(int i = 3; i < 1000006; i++){
        arr[i] = i + arr[i-1];
        s.insert(arr[i]);
    }

    for(int i = 0; i < t; i++){
        cin >> n ;
        if(s.find(n) != s.end()){
            cout << "YES"<< endl;
            
        }else{
            cout << decompose(n, s) <<endl;
        }
    } 
    return 0;
}
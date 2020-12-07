#include <bits/stdc++.h>

using namespace std;


//doesnt pass test case 1
int main(){
    freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t; 
    string s;
    for(int i = 0; i < t; i++){
        cin >> s;
        int sum = 0, index;
        for(int j = 1; j <= s.length(); j++){
            if(s[j] <= '9' && s[j] >= '0'){
                sum += j*(s[j] - '0');
            }else if(s[j] == 'X'){
                sum += j*10;
            }else if(s[j]== '?'){
                index = j;
            }
        }
        //int res = 11 - sum % 11;
        for(int j = 0; j <= 10; j++){
            if(( sum + j*index )%11 == 0){
                if(j == 10 && index == 10){
                    cout << 'X';
                }else{
                    cout << j;
                }
                break; 
            }
        }
        if(i != t-1){
            cout << endl;
        }
    } 
    return 0;
#include <bits/stdc++.h>

using namespace std;


//doesnt pass test case 1
int main(){
    freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t; 
    string s;
    for(int i = 0; i < t; i++){
        cin >> s;
        int sum = 0, index;
        for(int j = 1; j <= s.length(); j++){
            if(s[j] <= '9' && s[j] >= '0'){
                sum += j*(s[j] - '0');
            }else if(s[j] == 'X'){
                sum += j*10;
            }else if(s[j]== '?'){
                index = j;
            }
        }
        //int res = 11 - sum % 11;
        for(int j = 0; j <= 10; j++){
            if(( sum + j*index )%11 == 0){
                if(j == 10 && index == 10){
                    cout << 'X';
                }else{
                    cout << j;
                }
                break; 
            }
        }
        if(i != t-1){
            cout << endl;
        }
    } 
    return 0;
}
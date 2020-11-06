#include <bits/stdc++.h>

using namespace std;

string strToBin(string s){ 
    int n = s.length(); 
    string res = "";
    for (int i = 0; i <= n; i++){ 
        int val = int(s[i]); 
        string bin = ""; 
        while (val > 0) { 
            (val % 2)? bin.push_back('1') : 
                       bin.push_back('0'); 
            val /= 2; 
        } 
        reverse(bin.begin(), bin.end()); 
        res += bin;
    } 
    return res;
} 

int main()
{
    string s;
    cin >> s;
    s = strToBin(s);
    //cout << s << " " << s.length() << endl;
    int l = 0, r = 0;
    while (r < s.length()){
        int count = 0;
        while(r < s.length() && s[l] == s[r]){
            count++;
            r++;
        }
        
        if(s[l] == '1'){
            cout << "0 ";
            for(int i = 0; i < count; i++){
                cout << "0";
            }
            if(r < s.length()){
                cout << " ";
            }  
        }else{
            cout << "00 ";
            for(int i = 0; i < count; i++){
                cout << "0";
            }
            if(r < s.length()){
                cout << " ";
            }
        }
        l = r;
    }
    
    return 0;
}
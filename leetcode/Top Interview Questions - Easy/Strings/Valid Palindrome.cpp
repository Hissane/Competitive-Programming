class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(!isalnum(s[i])){
                s.erase(s.begin()+i);
                n = s.length();
                i--;
            }
        }
        for(int i = 0; i < n/2; i++){
            if(tolower(s[i]) != tolower(s[n-i-1])){
                return  false;
            }
        }
        return true;
    }
};
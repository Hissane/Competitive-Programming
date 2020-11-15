class Solution {
public:
    int myAtoi(string s) {
        int res = 0;
        int flag = 0;
        int daz = 0;
        for(int i = 0; i < s.length(); i++){
            while(s[i] == ' ' && !daz){
                i++;
            }
            if((s[i] == '-'|| s[i] == '+') && !daz){
                if(s[i] == '-') flag = 1;
                daz = 1;
            }else if(s[i] >= '0' && s[i] <= '9'){
                if(flag){
                    if(res > INT_MAX/10 || (res == INT_MAX/10 && (s[i]-'0') >= 8)) return INT_MIN;
                }else{
                    if(res > INT_MAX/10 || (res == INT_MAX/10 && (s[i]-'0') >= 7)) return INT_MAX;
                }
                res = res*10 + (s[i]-'0');
                daz = 1;
            }else{
                break;
            }
        }
        if(flag){
            res = -res;
        }
        return res;
    }
};
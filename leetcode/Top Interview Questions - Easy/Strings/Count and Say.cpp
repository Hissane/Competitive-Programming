class Solution {
public:
    string countAndSay(int n) {
        string s = "";
        if( n == 1 ){
            s = "1";
        }else{
            string str = countAndSay(n-1); 
            for(int i = 0; i < str.length(); i++){
                int count = 1;
                while(i < str.length()-1 && str[i] == str[i+1]){
                    count++;
                    i++;
                }
                s += to_string(count) + str[i];
            }
        }
        return s;
    }
};
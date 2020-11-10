class Solution {
public:
    int reverse(int x) {
        
        string s = to_string(x);
        int n = s.length();
        for(int i = 0; i < n/2; i++){
            int temp = s[i]; 
            s[i] = s[n - i- 1];
            s[n - i- 1] = temp;
        }
       
        if(x < 0){
            x = stoi(s);
            x = -x;
        }else{
            x = stoi(s);
        }
        
        return x;
    }
};
class Solution {
public:
    int maxPower(string s) {
    	int pow = 1, max;
    	for(int i = 0; i < s.length(); i++){
    		if(s[i] == s[i-1]){
    			pow++;
    		}else{
    			if(pow > max){
    				max = pow;
    			}
    			pow = 1;
    		}
    	}
        
    }
};
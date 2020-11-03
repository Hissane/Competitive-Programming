class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        int i = digits.size()-1;
        
        while(i >= 0 && digits[i] > 9){
            int val = digits[i]/10;
            digits[i] %= 10;
            if(i == 0){
                vector<int>::iterator it = digits.begin();
                digits.insert(it, val);
            }else{
                digits[i-1] += val;
            }
                
            i--;
        }
        return digits;
    }
};
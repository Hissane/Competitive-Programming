class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        if(n == 1){
            v.push_back("1");
            return v;
        }else{
            v = fizzBuzz(n-1);
            if(n%5 == 0){
                if(n%3 == 0){
                    v.push_back("FizzBuzz");
                }else{
                    v.push_back("Buzz");
                }
            }else if(n%3 == 0){
                v.push_back("Fizz");
            }else{
                v.push_back(to_string(n));
            }
            return v;
        }
    }
};
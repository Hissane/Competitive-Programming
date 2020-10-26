class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        for(int i = 1; i < nums.size(); i++){
            int prev = nums[i-1];
            if(prev == nums[i]){
                int k = 0;
                while(((i+k) < nums.size()) && prev == nums[i+k]){
                    k++;
                    len--;
                }
                for(int j = i; (j+k) < nums.size(); j++){
                    nums [j] = nums [j+k];
                }
                nums.resize(nums.size()-k);
            }
        }
        cout << len << ", nums = [";
        for(int i = 0; i < len-1; i++){
           cout << nums[i]<< ",";
        }
        if(len){
            cout << nums[len-1];
        }
        cout << "]";
        return len; 
    }
};
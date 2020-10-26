class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = 0;
        int prev = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(prev == nums[i] && i != 0){
                int k = 1;
                while(prev == nums[k+i] && ((i+k) < nums.size())){
                    k++;
                }
                for(int j = i; j < nums.size(); j++){
                    nums [j] = nums [j+k];
                }
                prev = nums[i];

            }else{
                len++;
                prev = nums[i];
            }
        }
        cout << len << ", nums = [" << nums[0];
        for(int i = 1; i < len; i++){
           cout << "," << nums[i];     
        }
        cout << "]";
        return len; 
    }
};
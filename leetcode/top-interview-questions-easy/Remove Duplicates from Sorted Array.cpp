class Solution {
public: //[1,1,2,2,2,3,3,3,3,4,5,5]
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int prev = nums[0];
        for(int i = 1; i < nums.size(); i++){
            prev = nums[i-1];
            if(prev == nums[i]){
                int k = 0;
                while(((i+k) < nums.size()) && prev == nums[i+k]){
                    k++;
                    len--;
                }
                //len-=k;
                nums.resize(nums.size()-k);
                for(int j = i; (j+k) < nums.size(); j++){
                    nums [j] = nums [j+k];
                }
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
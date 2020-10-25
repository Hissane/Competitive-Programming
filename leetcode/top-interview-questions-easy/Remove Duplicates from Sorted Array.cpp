class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = 0;
	    char prev;
        for(int i = 0; i < nums.size(); i++){
            if(prev == nums[i] && i != 0){
                for(int j = i; j < nums.size(); j++){
                    nums [j] = nums [j+1];
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
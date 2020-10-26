class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0, r = 0;
        while(r < nums.size()){
            while(r < nums.size() && nums[l] == nums[r]){
                r++;
            }
            l++;
            if(r != nums.size()){
                nums[l] = nums[r];  
            }else{
                break;
            }
        }
        cout << l << ", nums = [";
        for(int i = 0; i < l-1; i++){
           cout << nums[i]<< ",";
        }
        if(l){
            cout << nums[l-1];
        }
        cout << "]";
        return l; 
    }
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int m;

        if(nums.size() == 1){
            return nums[0];
        }
        

        for(int i = 0;i < nums.size();i++){
            if(i % 2 == 0 && nums[i] != nums[i+1]){
              m = nums[i]; 
              break; 
            }
        }

        return m;
    }
};
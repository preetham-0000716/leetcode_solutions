class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int m = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] % 3 == 0){
                continue;
            }
            else if(nums[i] % 3 == 1){
                m++;
            }
            else if(nums[i] % 3 == 2){
                m++;
            }

            }
        

        return m;
        
    }
};
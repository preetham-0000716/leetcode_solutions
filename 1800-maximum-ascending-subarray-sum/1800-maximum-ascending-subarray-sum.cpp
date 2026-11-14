class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        vector<int> b;
        int sum = nums[0];
        int i = 0;

        while(i < nums.size()-1){
            if(nums[i] < nums[i+1]){
                sum += nums[i+1];
            }
            else{
                b.push_back(sum);
                sum = nums[i+1];
            }
            i++;
            
        }


        b.push_back(sum);



        int m = *max_element(b.begin(),b.end());

        return m;
        


        
    }
};
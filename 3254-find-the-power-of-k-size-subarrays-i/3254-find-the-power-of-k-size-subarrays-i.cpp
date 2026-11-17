class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> b;


        if(k == 1){
            return nums;
        }

        for(int i = 0;i < nums.size()-k+1;i++){
            bool flag = true;

            for(int j= i;j < i+k-1;j++){
                if(nums[j + 1] != nums[j] + 1){
                    flag = false;
                    break;
                }
            }
            if(flag){
                b.push_back(nums[i+k-1]);
            }
            else{
                b.push_back(-1);
            }

        }


        return b;


      

 

 
        return b;



        
    }
};
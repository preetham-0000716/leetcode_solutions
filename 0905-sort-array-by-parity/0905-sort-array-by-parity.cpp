class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

     vector<int> b;

     for(int i : nums){
        if(i % 2 == 0){
            b.push_back(i);
        }
     }
     for(int i : nums){
        if(i % 2 != 0){
            b.push_back(i);
        }
     }
     return b;
        
    }
};
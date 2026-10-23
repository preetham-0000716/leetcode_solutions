class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {

        vector<int> b;
        stack<int> st;

        st.push(nums[0]);

       

        for(int i = 1;i < nums.size();i++){
          if(!st.empty() && st.top() <= nums[i]){
            st.push(nums[i]);
          }

              
    }
    return st.size();
        

        
        
    }
};
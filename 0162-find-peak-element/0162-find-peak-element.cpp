class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max1 = max_element(nums.begin(),nums.end())-nums.begin();
        return max1;
    }
};
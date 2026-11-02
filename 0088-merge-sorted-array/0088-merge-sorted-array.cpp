class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = 0;

        while(i < n){
            nums1.pop_back();
            i++;
        }
        for(int i : nums2){
            nums1.push_back(i);
        }

        return sort(nums1.begin(),nums1.end());
        
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> b;
        for(int i : nums1){
            b.push_back(i);
        }
        for(int i : nums2){
            b.push_back(i);
        }

        sort(b.begin(),b.end());

        int mid = b.size()/2;

        if(b.size() % 2 != 0){
            return (double) b[mid];
       }
       else{
        double med = (b[mid] + b[mid-1]);
        return med/2;
       }
        


        
    }
};
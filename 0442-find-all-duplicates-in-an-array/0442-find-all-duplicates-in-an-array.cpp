class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int,int> freq;
        unordered_set<int> s;
        vector<int> b;

        for(int x : nums){
            freq[x]++;
        }

        for(int x : nums){
            if(freq[x] > 1){
                s.insert(x);
            }
        }
        for(int x : s){
            b.push_back(x);
        }
        return b;
        
    }
};
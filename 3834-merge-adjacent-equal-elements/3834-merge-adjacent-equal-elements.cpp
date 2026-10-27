class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> c;
        vector<long long> b;

        for(long long i = 0;i < nums.size();i++){
            long long m = nums[i];
            while(!c.empty() && c.top() == m){
                m += c.top();
                c.pop();
            }
            c.push(m);

        }

        while(!c.empty()){
            b.push_back(c.top());
            c.pop();
        }

        reverse(b.begin(),b.end());

        return b;
        
    }
};
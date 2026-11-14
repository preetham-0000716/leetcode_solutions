class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double sum = 0;
        double avg = 0;
        double maxAvg = 0;

        for(int i = 0;i < k;i++){
            sum += nums[i];
        }

        avg = sum/k;

        maxAvg = avg;

        for(int i = 1;i < nums.size() - k + 1;i++){
            sum = sum - nums[i - 1] + nums[i + k - 1];
            avg = sum / k;
            maxAvg = max(maxAvg,avg);
        }

        return maxAvg;

        
    }
};
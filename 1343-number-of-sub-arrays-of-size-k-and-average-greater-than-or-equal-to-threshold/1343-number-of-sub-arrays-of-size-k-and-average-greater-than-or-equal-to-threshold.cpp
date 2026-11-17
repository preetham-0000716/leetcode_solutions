class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int count = 0;
        int sum = 0;

        for(int i = 0;i < k;i++){
            sum += arr[i];
        }
        int avg = sum / k;

        if(avg >= threshold){
            count++;
        }
        avg = 0;

        for(int i = 1;i < arr.size() - k + 1;i++){
            sum = sum - arr[i-1] + arr[i+k-1];
            avg = sum / k;
            if(avg >= threshold){
                count++;
            }
            avg = 0;
        }

        return count;
    
        
    }
};
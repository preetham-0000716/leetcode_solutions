class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        vector<int> b;

        

        for(int i = 0;i < prices.size();i++){
            bool found = false;
           for(int j = i+1;j < prices.size();j++){
            if(prices[j] <= prices[i]){
                b.push_back(prices[i] - prices[j]);
                found = true;
                break;
            }
        }
        if(!found){
            b.push_back(prices[i]);
        }
    }

        return b;
    }
};
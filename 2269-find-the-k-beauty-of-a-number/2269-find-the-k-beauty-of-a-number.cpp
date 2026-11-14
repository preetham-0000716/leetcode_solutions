class Solution {
public:
    int divisorSubstrings(int num, int k) {

        string s1 = to_string(num);
        int count = 0;
        string s2 = "";

        for(int i = 0;i < k;i++){
            s2 += s1[i];
        }
        int n = stoi(s2);

        if(num % n == 0){
            count++;
        }
        for(int i = 1;i < s1.size() - k + 1;i++){
            s2 = s2.substr(1) + s1[i+k-1];
            if(stoi(s2) == 0) continue;
            if(num % stoi(s2) == 0){
                count++;
            }
        }

        return count;


        
    }
};
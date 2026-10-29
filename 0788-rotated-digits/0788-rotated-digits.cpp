class Solution {
public:
    int rotatedDigits(int n) {

        int count = 0;
        int count2 = 0;

        for(int i = 1;i <= n;i++){
            string s = to_string(i);
            bool changed = false;
            for(char c : s){
                if(c == '3' || c == '4' || c == '7'){
                    count2 = -1;
                    break;
                }
                if(c == '2'|| c == '5' || c == '6' || c == '9'){
                    count2++;
                    changed = true;
                }
            }
            if(count2 != -1 && changed){
                count++;
            }
       
        }

        return count;

        
    }
};
class Solution {
public:
    int countGoodSubstrings(string s) {

        unordered_set<char> c;
        vector<string> b;

        if(s.size() < 3){
            return 0;
        }

        int n = 3;
        int count = 0;
        string s1 = "";

        for(int i = 0;i < n;i++){
            s1 += s[i];
        }
        for(char i : s1){
        c.insert(i);
        }

        if(c.size() == 3){
            count++;
        }
        c.clear();

        for(int i = 1;i < s.size() - n + 1;i++){
            s1 = s1.substr(1) + s[i+n-1];
            // b.push_back(s1); 
            for(char j : s1){
                c.insert(j);
            }
            if(c.size() == 3){
                count++;
            }
            c.clear();
        }

        // for(string i : b){
        //     for(char j : i){
        //     c.insert(j);
        //     }
        //     if(c.size() == 3){
        //         count++;
        //     }
        //     c.clear();

        // }

        return count;
        
    }
};
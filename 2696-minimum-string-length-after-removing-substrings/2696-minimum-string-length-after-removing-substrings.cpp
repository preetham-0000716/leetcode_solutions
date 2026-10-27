class Solution {
public:
    int minLength(string s) {
        stack<char> b;
        for(char c : s){
            if(!b.empty() && b.top() == 'A' && c == 'B'){
                b.pop();
            }
            else if(!b.empty() && b.top() == 'C' && c == 'D'){
                b.pop();
            }
            else{
                b.push(c);
            }
        }

        return b.size();
        
    }
};
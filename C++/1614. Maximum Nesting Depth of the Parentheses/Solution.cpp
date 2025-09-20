//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 8.6 MB

class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;

        int max_size = 0;
        for(char i : s){
            if(i == '('){
                st.push(i);
                max_size = max(max_size, (int)st.size());
            }
            else if(i == ')')
                st.pop();
        }

        return max_size;
    }
};

//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 9.3 MB

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> matching = {{']', '['}, {')', '('}, {'}', '{'}};

        stack<char> st;
        for(char i : s){
            if(i == '(' || i == '{' || i == '[')
                st.push(i);
            else{
                if(st.empty() || st.top() != matching[i])
                    return false;
                st.pop();
            }
        }

        return st.empty();
    }
};

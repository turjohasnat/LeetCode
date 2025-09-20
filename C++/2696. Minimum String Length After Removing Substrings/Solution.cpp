//C++ Solution:

//Runtime: 8 ms
//Memory Usage: 12.8 MB

class Solution {
public:
    int minLength(string s) {
        unordered_map<char, char> matching = {{'B', 'A'}, {'D', 'C'}};
        stack<char> st;

        for(char i : s){
            if(!st.empty() && st.top() == matching[i])
                st.pop();
            else 
                st.push(i);
        }

        return st.size();
    }
};

//C++ Solution:

//Runtime: 8 ms
//Memory Usage: 14.4 MB

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char i : s){
            if(!st.empty() && st.top() == i)
                st.pop();
            else
                st.push(i);
        }

        string temp_s;
        while(!st.empty()){
            temp_s += st.top();
            st.pop();
        }

        reverse(temp_s.begin(), temp_s.end());
        return temp_s;
    }
};

//C++ Solution:

//Runtime: 8 ms
//Memory Usage: 12.8 MB

class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for(char i : s){
            if(isdigit(i)){
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(i);
        }

        string result;
        while(!st.empty()){
            result = st.top() + result;
            st.pop();
        }

        return result;
    }
};

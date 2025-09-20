//C++ Solution:

//Runtime: 3 ms
//Memory Usage: 9.3 MB

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

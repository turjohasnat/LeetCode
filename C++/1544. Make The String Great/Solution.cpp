//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 8.8 MB

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(char i : s){
            if(!st.empty() && abs(i - st.top()) == 32)
                st.pop();
            else 
                st.push(i);
        }

        string result;
        while(!st.empty()){
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

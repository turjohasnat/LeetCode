//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 14.6 MB

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;

        for(auto i : logs){
            if(i == "../"){
                if(!st.empty())
                    st.pop();
            }
            else if(i == "./")
                continue;
            else
                st.push(i);
        }

        int result = st.size();
        return result;
    }
};

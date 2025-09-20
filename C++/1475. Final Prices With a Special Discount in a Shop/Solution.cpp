//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 14.2 MB

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> result(prices.size());

        for(int i = 0; i < prices.size(); i++){
            while(!st.empty() && prices[i] <= prices[st.top()]){
                result[st.top()] = prices[st.top()] - prices[i];
                st.pop();
            }

            st.push(i);
        }

        while(!st.empty()){
            result[st.top()] = prices[st.top()];
            st.pop();
        }
        
        return result;
    }
};

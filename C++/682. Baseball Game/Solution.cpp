//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 12.2 MB
    
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string i : operations){
            if(i == "+"){
                int a = st.top();
                st.pop();
                int s = a + st.top();
                st.push(a);
                st.push(s);
            }
            else if(i == "C"){
                st.pop();
            }
            else if(i == "D"){
                int a = 2 * st.top();
                st.push(a);
            }
            else{
                int num = stoi(i);
                st.push(num);
            }
        }

        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};

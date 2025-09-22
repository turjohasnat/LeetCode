//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 27 MB

class Solution {
public:
    int trap(vector<int>& height) {
        int total_water = 0;

        stack<int> st;
        for(int i = 0; i < height.size(); i++){
            while(!st.empty() && height[i] > height[st.top()]){
                int first_index = st.top();
                st.pop();

                if(st.empty())
                    break;

                int second_index = st.top();
                int width = i - second_index - 1;
                int t_height = min(height[i], height[second_index]) - height[first_index];

                total_water += width * t_height;
            }

            st.push(i);
        }

        return total_water;
    }
};

//C++ Solution:

//Runtime: 4 ms
//Memory Usage: 62.8 MB

class Solution {
public:
    int maxArea(vector<int>& height) {
        int firstLine = 0;
        int lastLine = height.size() - 1;
        int maxArea = 0;

        while(firstLine < lastLine){
            int area = min(height[firstLine], height[lastLine]) * (lastLine - firstLine);
            maxArea = max(maxArea, area);

            if(height[firstLine] < height[lastLine]){
                firstLine++;
            }
            else{
                lastLine--;
            }
        }
        return maxArea;
    }
};

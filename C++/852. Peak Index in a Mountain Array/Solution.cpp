//C++ Solution:

//Runtime: 4 ms
//Memory Usage: 63.7 MB

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = max_element(arr.begin(), arr.end()) - arr.begin();
        return i;
    }
};

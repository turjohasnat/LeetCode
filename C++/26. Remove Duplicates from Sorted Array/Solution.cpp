//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 22.6 MB

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = unique(nums.begin(), nums.end()) - nums.begin();
        return k;
    }
};

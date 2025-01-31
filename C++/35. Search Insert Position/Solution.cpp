//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 13.6 MB

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target) return i;
            else if(nums[i] > target) return cnt;
            cnt++;
        }
        return cnt;
    }
};

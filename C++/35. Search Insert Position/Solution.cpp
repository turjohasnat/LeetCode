//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 13.6 MB

class Solution {

    int isOk(vector<int>& nums, int x, int mid){
        if(nums[mid] < x) return 0;
        else return 1;
    }

public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        int x = target;

        while(left < right){
            int mid = (left + right) / 2;

            if(isOk(nums, x, mid) == 0) left = mid + 1;
            else right = mid;
        }

        return left;
    }
};

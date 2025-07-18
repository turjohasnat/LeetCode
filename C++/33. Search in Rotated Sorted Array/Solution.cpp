//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 15.3 MB

class Solution {
    int isOk(vector<int>& nums, int left, int mid, int right, int target) {
        if (nums[mid] == target) 
            return 2;
        
        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) 
                return 0;
            else 
                return 1;
        } 
        else {
            if (nums[mid] < target && target <= nums[right]) 
                return 1;
            else 
                return 0;
        }
    }

public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int result = isOk(nums, left, mid, right, target);

            if (result == 2) 
                return mid;
            else if (result == 0) 
                right = mid - 1;
            else 
                left = mid + 1;
        }

        return -1;
    }
};

//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 13.7 MB

class Solution {

    int isOk(vector<int>& nums, int mid, int target){
        if(nums[mid] == target)
            return 2;
        
        if(nums[mid] <= target)
            return 0;
        else 
            return 1;
    }

public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            int result = isOk(nums, mid, target);

            if(result == 2)
                return mid;
            else if(result == 0)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return left;
    }
};

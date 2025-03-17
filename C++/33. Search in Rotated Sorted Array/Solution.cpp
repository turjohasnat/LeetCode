//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 15.1 MB

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lb = 0, ub = nums.size() - 1;

        while(lb <= ub){
            int mid = (lb + ub)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[lb] <= nums[mid]){
                if(nums[lb] <= target && nums[mid] > target)
                    ub = mid - 1;
                else 
                    lb = mid + 1;
            }
            else{
                if(nums[mid] < target && target <= nums[ub])
                    lb = mid + 1;
                else
                    ub = mid - 1;
            }
        }
        return -1;
    }
};

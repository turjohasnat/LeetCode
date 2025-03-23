//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 13.9 MB

class Solution {
    public:
    int findMin(vector<int>& nums) {
        int lb = 0, ub = nums.size() - 1;

        while(lb < ub){
            int mid = (lb + ub)/2;
            if(nums[mid] < nums[ub])
                ub = mid;
            else
                lb = mid + 1;
        }
        return nums[lb];
    }
};

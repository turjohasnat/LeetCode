//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 31.4 MB

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int LB = 0, UB = nums.size() - 1;
        int MID = (LB + UB)/2;

        while(LB <= UB){
            if(nums[MID] == target)
                return MID;
            else if(nums[MID] < target)
                LB = MID + 1;
            else
                UB = MID - 1;
            
            MID = (LB + UB)/2;
        }
        return -1;
    }
};

//C++ Solution:

//Runtime: 46 ms
//Memory Usage: 14.2 MB

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

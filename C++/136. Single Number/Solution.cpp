//C++ Solution:

//Runtime: 512 ms
//Memory Usage: 20.7 MB

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            bool isDuplicate = false;
            for(int j = 0; j < nums.size(); j++){
                if(i != j && nums[i] == nums[j]){
                    isDuplicate = true;
                    break;
                }
            }
            if(isDuplicate == false)
                return nums[i];
        }
        return -1;
    }
};

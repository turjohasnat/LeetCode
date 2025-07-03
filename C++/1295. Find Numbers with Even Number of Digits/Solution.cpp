//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 14.5 MB

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int total_digits = 0;

        for(int i = 0; i < nums.size(); i++){
            string num = to_string( nums[i] );

            int size = num.size();
            if(size % 2 == 0)
                total_digits++;
        }

        return total_digits;
    }
};

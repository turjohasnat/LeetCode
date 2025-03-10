//C++ Solution:

//Runtime: 4 ms
//Memory Usage: 13.4 MB

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_digits = 0;
        for(int i = 0; i < nums.size(); i++){
            int digits = 0;
            int num = nums[i];
            while(num != 0){
                num /= 10;
                digits++;
            }

            if(digits % 2 == 0)
                even_digits++;
        }
        return even_digits;
    }
};

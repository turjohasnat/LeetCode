//C++ Solution:

//Runtime: 13 MS
//Memory Usage: 23.97 MB

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> num;

        for(auto u : nums)
            num[u]++;

        for(auto u : num){
            if(u.second == 1)
                return u.first;
        }

        return -1;
    }
};

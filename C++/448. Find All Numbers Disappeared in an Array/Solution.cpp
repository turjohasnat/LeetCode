//C++ Solution:

//Runtime: 77 ms
//Memory Usage: 66.1 MB

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> num;
        for(auto u : nums)
            num.insert( u );

        vector<int> missing_nums;
        for(int i = 1; i <= nums.size(); i++){
            if(num.find(i) == num.end())
                missing_nums.push_back( i );
        }

        return missing_nums;
    }
};

//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 11.4 MB

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;

        for(int i = 0; i < accounts.size(); i++){
            int total_wealth = 0;

            for(int j = 0; j < accounts[i].size(); j++){
                total_wealth += accounts[i][j];
            }

            max_wealth = max(max_wealth, total_wealth);
        }
        return max_wealth;
    }
};

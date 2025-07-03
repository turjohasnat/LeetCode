//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 12.2 MB

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto u : arr)
            mp[u]++;

        set<int> st;
        for(auto u : mp)
            st.insert(u.second);
        
        if(st.size() == mp.size())
            return true;
        else 
            return false;
    }
};

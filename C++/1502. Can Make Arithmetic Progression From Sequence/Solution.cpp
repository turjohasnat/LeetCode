//C++ Solution:

//Runtime: 0 ms
//Memory Usage: 12.5 MB

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int a = arr[1] - arr[0];
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i+1] - arr[i] != a) return false;
        }

        return true;
    }
};

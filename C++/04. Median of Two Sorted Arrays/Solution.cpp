//C++ Solution:

//Runtime: 3 ms
//Memory Usage: 95.5 MB

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        
        if(nums1.size() % 2 != 0){
            int a = nums1.size() / 2;
            return nums1[a];
        }
        else{
            int b = nums1.size() / 2;
            double result = (nums1[b] + nums1[b-1]) / 2.0;
            return result;
        }
    }
};

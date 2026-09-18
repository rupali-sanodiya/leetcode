#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> countMap;
        vector<int> ans;
        
        // Step 1: Count frequencies of elements in nums1
        for (int num : nums1) {
            countMap[num]++;
        }
        
        // Step 2: Check elements in nums2 against the map
        for (int num : nums2) {
            // If the number exists in the map and has a count greater than 0
            if (countMap[num] > 0) {
                ans.push_back(num);
                countMap[num]--; // Decrement so we don't over-add duplicates
            }
        }
        
        return ans;
    }
};
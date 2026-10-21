class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Step 1: Array ko ek hi baar sort karo
        sort(nums.begin(), nums.end());

        // Step 2: Adjacent elements check karo
        for(int i = 0; i < (int)nums.size() - 1; i++) {
            if(nums[i] == nums[i+1]) {
                return true; // Duplicate mil gaya
            }
        }

        return false; // Koi duplicate nahi mila
    }
};
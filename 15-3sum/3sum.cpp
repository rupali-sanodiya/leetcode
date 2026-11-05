class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> arr;
        int n = nums.size();
        
        sort(nums.begin(), nums.end()); // 1. Sort first

        for(int i = 0; i < n - 2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue; // Skip duplicates for i

            int start = i + 1; // 2. Reset start for each i
            int end = n - 1;   // 3. Reset end for each i

            while(start < end){
                int sum = nums[i] + nums[start] + nums[end];
                if(sum == 0){
                    arr.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                    // Skip duplicates
                    while(start < end && nums[start] == nums[start-1]) start++;
                    while(start < end && nums[end] == nums[end+1]) end--;
                }
                else if(sum < 0){
                    start++; // Sum too small, move right
                }
                else {
                    end--;   // Sum too large, move left
                }
            }
        }
        return arr;
    }
};
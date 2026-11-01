class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) { 
        sort(nums.begin(), nums.end());
        int closesum = nums[0] + nums[1] + nums[2];
        
        for(int i = 0; i < nums.size() - 2; i++) {
            int start = i + 1;
            int end = nums.size() - 1;
            
            while(start < end) {
                int currentsum = nums[i] + nums[start] + nums[end];
                
                if(abs(currentsum - target) < abs(closesum - target)) {
                    closesum = currentsum;
                }
                
                if(currentsum < target) {
                    start++;
                }
                else if(currentsum > target) {
                    end--;
                }
                else {
                    return currentsum; // Exact match mil gaya, yahin se return kar do
                }
            }
        }  
        return closesum; 
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int>ans;
      for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                bool cheak=false;
                for(int val:ans){
                    if(val==nums1[i]){
                        cheak=true;
                        break;
                    }
                }
               if (!cheak){
                    ans.push_back(nums1[i]);
                  
                }
                  break;
            }
        }
      }
      return ans;
    }
};
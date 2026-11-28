class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int>arr(nums1.size(),-1);
     for(int i=0;i<nums1.size();i++){
        for(int j=0;nums2.size();j++){
            if(nums1[i]==nums2[j]){
                for(int k=j+1;k<nums2.size();k++){
                    if(nums1[i]<nums2[k]){
                        arr[i]=nums2[k];
                        break;
                    }
                }
                break;
            }
        }
     }
     return arr;
       }
        
        };

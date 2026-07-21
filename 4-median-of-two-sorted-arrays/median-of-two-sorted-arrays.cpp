class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, k = 0;
        int n = nums1.size() + nums2.size();
        vector<int> arr(n); // Dynamic array (vector) use karein
        
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                arr[k] = nums1[i];
                i++;
                k++;
            } else {
                arr[k] = nums2[j];
                j++;
                k++;
            }
        }

        while(i < nums1.size()){
            arr[k++] = nums1[i++];}

        while(j < nums2.size()){

         arr[k++] = nums2[j++];
        }

        // Median Calculation
        if(n % 2 == 0){
            int mid = n / 2;
            // 2.0 se divide karein taaki double value mile
            return (double)(arr[mid] + arr[mid - 1]) / 2.0;
        } else {
            int mid = n / 2;
            return (double)arr[mid];
        }
    }
};
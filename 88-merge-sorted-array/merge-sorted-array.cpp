class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>ans(n+m);
    for(int i=0;i<m;i++){
        ans[i]=nums1[i];
    }
    for(int j=0;j<n;j++){
        ans[j+m]=nums2[j];
    }
    sort(ans.begin(),ans.end());
    nums1=ans;
    }

};
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> arr(n, 0);
        
        if (k == 0) return arr; 
        
        int start = 0;
        while (start < n) {
            int sum = 0; 
            
            for (int i = 1; i <= abs(k); i++) {
                int idx;
                if (k > 0) {
                    idx = (start + i) % n; 
                } else {
                    idx = (start - i + n) % n; 
                }
                sum += code[idx];
            }
            
            arr[start] = sum; 
            start++;
        }
        
        return arr;
    }
};
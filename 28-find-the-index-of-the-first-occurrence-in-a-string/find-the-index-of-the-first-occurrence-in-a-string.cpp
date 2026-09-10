class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0; // tracks haystack
        int j = 0; // tracks needle
        int start = 0; // remembers where our current match attempt began
        
        while (i < haystack.size() && j < needle.size()) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
            } else {
                // Mismatch! Shift our starting anchor forward by 1
                start++;
                i = start; // Reset haystack pointer to the next try
                j = 0;     // Reset needle pointer back to the beginning
            }
        }
        
        // If j reached the end of the needle, we found a complete match!
        if (j == needle.size()) {
            return start;
        }
        
        return -1;
    }
};
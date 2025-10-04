//Leetcode 88 - to merge two sorted arrays

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;           // Last index of valid nums1
        int p2 = n - 1;           // Last index of nums2
        int p = m + n - 1;        // Last index of nums1 (with extra space)

        // Merge from back to front
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // If nums2 has remaining elements (nums1 elements are already in place)
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[m+i]= nums2[i];
        }
        sort (nums1.begin(), nums1.end());
    }
};

dry run 
Certainly! Let's do a dry run of the line nums1[m + i] = nums2[i]; using an example:

Suppose nums1 initially looks like this: [1, 2, 3, 0, 0, 0] (with three elements at the beginning and three zeros at the end), and m is 3.

And suppose nums2 looks like this: [4, 5, 6] with n being 3.

Now, let's go through the loop for each i:

Iteration with i = 0:

nums1[m + i] = nums2[i]; becomes nums1[3 + 0] = nums2[0];
This sets the value at index 3 in nums1 (which was initially 0) to the value at index 0 in nums2.
After this iteration, nums1 becomes [1, 2, 3, 4, 0, 0].
Iteration with i = 1:

nums1[m + i] = nums2[i]; becomes nums1[3 + 1] = nums2[1];
This sets the value at index 4 in nums1 (which was initially 0) to the value at index 1 in nums2.
After this iteration, nums1 becomes [1, 2, 3, 4, 5, 0].
Iteration with i = 2:

nums1[m + i] = nums2[i]; becomes nums1[3 + 2] = nums2[2];
This sets the value at index 5 in nums1 (which was initially 0) to the value at index 2 in nums2.
After this iteration, nums1 becomes [1, 2, 3, 4, 5, 6].
So, the line nums1[m + i] = nums2[i]; effectively copies the elements from nums2 to the end of nums1, starting from the position specified by m.







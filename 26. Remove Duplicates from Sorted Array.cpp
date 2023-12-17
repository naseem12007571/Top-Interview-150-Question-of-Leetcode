class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) {
            return 0;
        }

        int ans = 1; // At least one distinct element is always there
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i-1]) {
              arr[ans++]=arr[i];
            }
        }
        return ans;
    }
};

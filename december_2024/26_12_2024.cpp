class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end()); // Sort the array
        int left = 0, right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == target) {
                return true; // Pair found
            } else if (sum < target) {
                left++; // Move the left pointer to increase the sum
            } else {
                right--; // Move the right pointer to decrease the sum
            }
        }
        return false; // No pair found
    }
};

class Solution {
public:
    int minSumOfLengths(std::vector<int>& arr, int target) {
        int n = arr.size();
        
        // min_len[i] stores the minimum length of a valid subarray found in arr[0...i]
        std::vector<int> min_len(n, INT_MAX);
        
        int min_total_sum = INT_MAX;
        int current_window_sum = 0;
        int left = 0;
        
        for (int right = 0; right < n; ++right) {
            current_window_sum += arr[right];
            
            // Shrink the window from the left if the sum exceeds the target
            while (current_window_sum > target) {
                current_window_sum -= arr[left];
                left++;
            }
            
            // If we found a valid subarray matching the target sum
            if (current_window_sum == target) {
                int current_len = right - left + 1;
                
                // Check if there is a valid, non-overlapping subarray to the left
                if (left > 0 && min_len[left - 1] != INT_MAX) {
                    min_total_sum = std::min(min_total_sum, min_len[left - 1] + current_len);
                }
                
                // Update the minimum length found at the current end pointer
                min_len[right] = current_len;
            }
            
            // Carry forward the minimum length seen so far to maintain prefix history
            if (right > 0) {
                min_len[right] = std::min(min_len[right], min_len[right - 1]);
            }
        }
        
        return min_total_sum == INT_MAX ? -1 : min_total_sum;
    }
};

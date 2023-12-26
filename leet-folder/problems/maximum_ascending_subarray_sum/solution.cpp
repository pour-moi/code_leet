class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0;
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 || nums[i] > nums[i - 1]) {
                currentSum += nums[i];
            } else {
                maxSum = max(maxSum, currentSum);
                currentSum = nums[i];
            }
        }
        
        return max(maxSum, currentSum);
    }
};
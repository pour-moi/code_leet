class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int first = nums[0];
        int last = nums[nums.size() - 1];

        int greate = gcd(first, last);

        return greate;
    }
};
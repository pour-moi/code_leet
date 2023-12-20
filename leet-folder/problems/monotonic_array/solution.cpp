class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> ascending = nums;
        sort(ascending.begin(),ascending.end());
        vector<int> descending = nums;
        sort(descending.begin(), descending.end(), greater<int>());
        
        return nums == ascending || nums == descending;
    }
};
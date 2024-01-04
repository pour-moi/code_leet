class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        while (!nums.empty()) {
            int alice = nums.front();
            nums.erase(nums.begin());
            int bob = nums.front();
            nums.erase(nums.begin());
            result.push_back(bob);
            result.push_back(alice);
        }
        return result;
    }
};
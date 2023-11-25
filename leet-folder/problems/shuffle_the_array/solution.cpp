class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> halfedArray;
        for(int i = n; i < nums.size(); i++){
            halfedArray.push_back(nums[i]);
        }
        vector<int> finalArray;
        for(int i = 0; i < n; i++){
            finalArray.push_back(nums[i]);
            finalArray.push_back(halfedArray[i]);
        }
        return finalArray;
    }
};
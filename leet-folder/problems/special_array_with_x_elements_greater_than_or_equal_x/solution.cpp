class Solution {
public:
    int specialArray(vector<int>& nums) { 
        sort(nums.begin(),nums.end());
        int count=0;
        for(int x = 1; x <=nums.size();x++){
            for(int j = 0; j<nums.size();j++){
                if(nums[j]>=x) count++;
            }
            if(count == x) return count;
        count=0;
        }
        return -1;
}
};
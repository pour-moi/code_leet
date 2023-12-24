class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int lucky = -1;
        for(int i = 0; i < arr.size(); i++)
        {
            int c = count(arr.begin(), arr.end(), arr[i]);
            if(arr[i] == c) lucky = max(lucky, arr[i]);
        }
        return lucky;
    }
};

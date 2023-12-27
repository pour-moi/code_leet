class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        vector<int> sorted=candies;
        sort(sorted.begin(),sorted.end());
        for(int i=0;i<candies.size();i++){
          int ans=candies[i]+extraCandies;
            if(ans>=sorted[candies.size()-1]){
                result.push_back(true);
            }else
                result.push_back(false);
        }
        return result;
    }
};
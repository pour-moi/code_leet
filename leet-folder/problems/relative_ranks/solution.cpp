class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result(score.size());
        vector<int> sorted = score;
        sort(sorted.begin(), sorted.end(), greater<int>());
        
        for(int i = 0; i < score.size(); i++){
            int pos = find(sorted.begin(), sorted.end(), score[i]) - sorted.begin();
            
            if(pos == 0) result[i] = "Gold Medal";
            else if(pos == 1) result[i] = "Silver Medal";
            else if(pos == 2) result[i] = "Bronze Medal";
            else result[i] = to_string(pos + 1);
        }
        return result;
    }
};

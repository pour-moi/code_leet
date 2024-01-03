class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        int maxnum = 0;
        for(int i = 0; i < sentences.size(); i++){
            count = 0;
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' ') count++;
            }
            maxnum = max(count, maxnum);
        }
        return maxnum + 1;
    }
};
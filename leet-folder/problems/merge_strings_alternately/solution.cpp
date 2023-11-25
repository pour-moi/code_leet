class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        int size;
        if(word1.size() > word2.size()) size = word1.size();
        else size = word2.size();

        for(int i = 0; i < size; i++){
            if(i < word1.size()) merge += word1[i];
            if(i < word2.size()) merge += word2[i];
        }
        return merge;
    }
};
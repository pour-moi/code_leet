class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1 = accumulate(word1.begin(), word1.end(), string(""));
        string result2 = accumulate(word2.begin(), word2.end(), string(""));

        return result1 == result2;
    }
};
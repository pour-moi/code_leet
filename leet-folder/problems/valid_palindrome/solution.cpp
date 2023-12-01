class Solution {
public:
    bool isPalindrome(string s) {
        string removed;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57){
            if(s[i] >= 65 && s[i] <= 90) s[i] += 32;
                removed += s[i];
            }
        }
        string reversed;
        for(int i = removed.size() - 1; i >= 0; i--){
            reversed += removed[i];
        }
        if(reversed == removed) return true;

        return false;
    }
};
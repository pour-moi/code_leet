class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int achievable = 1;
        while(num + t != achievable - t){
            achievable++;
        }
        return achievable;
    }
};
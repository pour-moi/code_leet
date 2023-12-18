class Solution {
public:
    bool isThree(int n) {
    if(n <= 2) return false;
    int num = 2;
    while(num * num < n){
        if(n % num == 0) return false;
        num += 1;
    }
    if(num * num == n) return true;
    return false;
    }
};
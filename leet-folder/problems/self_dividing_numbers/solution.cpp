class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> results;
        for(int i = left; i <= right; i++){
            string toString = to_string(i);
            int size = toString.size();
            int divisor = pow(10, size - 1);
            bool check = true;
            for(int j = 0; j < size; j++){
                int eachNumber = (i / divisor) % 10;
                divisor /= 10;

                if(eachNumber == 0 || i % eachNumber != 0){
                    check = false;
                    break;
                }
            }
            if(check) results.push_back(i);
        }
        return results;
    }
};
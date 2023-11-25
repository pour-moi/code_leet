class Solution {
    public int smallestEvenMultiple(int n) {
       int multiple;
       for(int i = 1; ;i++){
           multiple = i * n;
           if(multiple % 2 == 0) return multiple;
       } 
    }
}
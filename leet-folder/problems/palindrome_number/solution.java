class Solution {
    public boolean isPalindrome(int x) {
        String convertedNum = String.valueOf(x);
        String reversedNum = new StringBuilder(String.valueOf(x)).reverse().toString();
        if(convertedNum.equals(reversedNum)) return true;

        return false;
    }
}
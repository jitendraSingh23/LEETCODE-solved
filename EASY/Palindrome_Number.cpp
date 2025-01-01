 class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long reversedNum = 0;
        long long temp = x;
        while (temp != 0) {
            int lastDigit = temp % 10;
            reversedNum = reversedNum * 10 + lastDigit;
            temp /= 10;
        }
        return (reversedNum == x);
    }
};
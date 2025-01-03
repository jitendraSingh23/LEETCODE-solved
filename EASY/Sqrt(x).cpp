class Solution {
public:
    long long int binarysearch(int n) {
        int s = 0;
        int e = n;
        long long int mid = s + (e - s) / 2;
        long long int ans = -1;
        while (s <= e) {
            long long int squar = mid * mid;
            if (squar == n) {
                return mid;
            }
            if (squar < n) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
    int mySqrt(int x) { return binarysearch(x); }
};
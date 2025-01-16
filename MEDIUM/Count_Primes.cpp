class Solution {
public:
    int countPrimes(int n) {
        if (n == 0 || n == 1)
            return 0;
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        int primeCount = 0;
        for (int i = 2; i <= sqrt(n); i++) {
            if (prime[i])
                primeCount++;
            int j = i * i;
            while (j < n) {
                prime[j] = false;
                j += i;
            }
        }

        for (int i = sqrt(n) + 1; i < n; i++) {
            if (prime[i]) {
                primeCount++;
            }
        }

        return primeCount;
    }
};
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            if (x == -1) continue;
            int cnt = 0;
            while (nums[x] != -1) {
                cnt += 1;
                int prev = x;
                x = nums[x];
                nums[prev] = -1; 
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
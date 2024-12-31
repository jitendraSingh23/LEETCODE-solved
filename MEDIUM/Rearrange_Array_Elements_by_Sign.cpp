class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n = nums.size();
        int index = 0;
        int evenIndex = 0;
        int oddIndex = 1;
        vector<int> ans(n);

       while(index < n ) {
           if(nums[index] > 0) {
            ans[evenIndex] = nums[index];
            evenIndex += 2;
           }
           index++;
       }

       index = 0;
        while(index < n ) {
           if(nums[index] < 0) {
            ans[oddIndex] = nums[index];
            oddIndex += 2;
           }
           index++;
       }
       return ans;  
    }
};
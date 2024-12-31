class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size= nums.size();
        long sum=0;

        long actualsum=(long)size*(size+1)/2;
        for(int i : nums)
        {
            sum+=i;
        }
return (actualsum - sum);
    }
};
class Solution {
public:

    //function for having sum stored in it
    int sumArray(vector<int>& nums, int s, int e){
        int sum = 0;
        for(int i = s; i<=e; i++){
            sum+=nums[i];
        }
        return sum;
    }
    //solve the actual question
    int pivotIndex(vector<int>& nums) {
        //make the start, end, mid, leftsum, rightsum elements first

        //all under the loop
        for(int i = 0; i<nums.size(); i++){
            int s = i - 1;
            int e = i + 1;
            int m = s + (e - s)/2;
            int ls = sumArray(nums,0,m-1);
            int rs = sumArray(nums,m+1,nums.size()-1);

            //comparison
            if(ls == rs){
                return m;
            }
            else if(ls > rs){
                m = m - 1;
            }else{
                m = m + 1;
            }
            m = s + (e - s)/2;
        }
        return -1;
    }
};
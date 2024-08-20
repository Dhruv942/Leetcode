class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));

        int sum = 0;
        while(k>0){
            nums[0]=-nums[0];
               sort(begin(nums),end(nums));
             k--;
        }
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};

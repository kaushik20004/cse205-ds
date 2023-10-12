class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()!=1){
            vector<int>output;
            for(int i=1;i<nums.size();i++){
                output.push_back((nums[i]+nums[i-1])%10);
            }
            nums = output;
            output.clear();
        }
        return nums[0];
    }
};
class Solution {
public:
    void backtrack(vector<vector<int>>& result, vector<int>& nums, vector<int>& subset, int start) {
        result.push_back(subset);
        for (int i = start; i < nums.size(); ++i) {
            if (i > start && nums[i] == nums[i - 1])
                continue;
            subset.push_back(nums[i]);
            backtrack(result, nums, subset, i + 1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        sort(nums.begin(), nums.end());  
        backtrack(result, nums, subset, 0);
        return result;
    }
};
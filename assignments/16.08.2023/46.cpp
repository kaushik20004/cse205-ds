class Solution {
public:
    void backtrack(vector<vector<int>>& result, vector<int>& nums, vector<int>& permutation, vector<bool>& used) {
        if (permutation.size() == nums.size()) {
            result.push_back(permutation);
            return;
        }
        for (size_t i = 0; i < nums.size(); ++i) {
            if (used[i])
                continue;
            permutation.push_back(nums[i]);
            used[i] = true;
            backtrack(result, nums, permutation, used);
            used[i] = false;
            permutation.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> permutation;
        vector<bool> used(nums.size(), false);
        backtrack(result, nums, permutation, used);
        return result;
    }
};
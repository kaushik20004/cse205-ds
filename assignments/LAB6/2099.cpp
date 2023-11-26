class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> result;
    int maxSum = 0;
    int startIndex = 0;
    for (int i = 0; i < k; ++i) {
        maxSum += nums[i];
    }
    int currentSum = maxSum;
    for (int i = k; i < nums.size(); ++i) {
        currentSum += nums[i] - nums[i - k]; 
        if (currentSum > maxSum) {
            maxSum = currentSum;
            startIndex = i - k + 1;
        }
    }
    result = vector<int>(nums.begin() + startIndex, nums.begin() + startIndex + k);

    cout << "Output: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return result;
    }
};
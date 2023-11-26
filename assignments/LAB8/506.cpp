class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
    vector<pair<int, int>> scoreWithIndices(n);
    for (int i = 0; i < n; i++) {
        scoreWithIndices[i] = {score[i], i};
    }
    sort(scoreWithIndices.rbegin(), scoreWithIndices.rend());
    map<int, string> rankMap = {
        {0, "Gold Medal"},
        {1, "Silver Medal"},
        {2, "Bronze Medal"}
    };
    vector<string> result(n);
    for (int i = 0; i < n; i++) {
        int originalIndex = scoreWithIndices[i].second;
        if (i < 3) {
            result[originalIndex] = rankMap[i];
        } else {
            result[originalIndex] = to_string(i + 1);
        }
    }
    return result;
    }
};
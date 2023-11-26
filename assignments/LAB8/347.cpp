class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }
    auto comp = [&frequencyMap](int a, int b) {
        return frequencyMap[a] > frequencyMap[b];
    };
    priority_queue<int, vector<int>, decltype(comp)> pq(comp);
    for (auto& pair : frequencyMap) {
        pq.push(pair.first);
        if (pq.size() > k) {
            pq.pop(); 
        }
    }
    vector<int> result;
    while (!pq.empty()) {
        result.insert(result.begin(), pq.top());
        pq.pop();
    }
    return result;
    }
};
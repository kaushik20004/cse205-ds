class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
    for (int stone : stones) {
        maxHeap.push(stone);
    }
    while (maxHeap.size() > 1) {
        int y = maxHeap.top();
        maxHeap.pop();
        int x = maxHeap.top();
        maxHeap.pop();
        int newStone = y - x;
        if (newStone > 0) {
            maxHeap.push(newStone);
        }
    }
    return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
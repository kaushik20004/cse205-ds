class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int missingCount = 0;
        int current = 1;
        int i = 0;
        while(missingCount < k){
            if(i<n && arr[i] == current){
            i++;
            }
            else{
                missingCount++;
                if(missingCount == k){
                    return current;
                }
            }
            current ++;

        }
        return -1;
    }
};
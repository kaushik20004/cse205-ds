class Solution {
public:
    void f(int i, int n,int k,vector<int> &subsets,vector<vector<int>> &ans){
        if(k == 0){
            ans.push_back(subsets);
            return;
        }
        if(k > n-i+1) return; 
        if(i > n){
            return;
        }
        subsets.push_back(i);
        f(i+1,n,k-1,subsets,ans); 
        subsets.pop_back();
        f(i+1,n,k,subsets,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subsets;
        vector<vector<int>> ans;
        f(1,n,k,subsets,ans);
        return ans;
    }
};
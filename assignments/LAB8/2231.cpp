class Solution {
public:
    int largestInteger(int num) {
        priority_queue<char> q0, q1;
        string s = to_string(num);
        int vis[15] = {};
        for(int i=0; i<s.size(); i++) {
            if((s[i]-'0') % 2) q1.push(s[i]), vis[i] = 1;
            else q0.push(s[i]);
        }
        string t;
        for(int i=0; i<s.size(); i++) {
            if(vis[i]) t.push_back(q1.top()), q1.pop();
            else t.push_back(q0.top()), q0.pop();
        }
        int ans = stoi(t);
        return ans;
    }
};
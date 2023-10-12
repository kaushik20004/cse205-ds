class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score = 0;
        stack<int>q;
        for(int i=0;i<operations.size();i++){
            if(q.empty()) q.push(stoi(operations[i]));
            else{
                if(operations [i]=="+"){
                    int a = q.top();
                    q.pop();
                    int b = q.top();
                    int sum = a+b;
                    q.push(a);
                    q.push(sum);
                }
                else if(operations[i]=="D"){
                    int c = q.top();
                    int mul = 2*c;
                    q.push(mul);
                }
                else if(operations[i]=="C"){
                    q.pop();
                }
                else{
                    q.push(stoi(operations[i]));
                }
            }
        }
        while(!q.empty()){
            score+=q.top();
            q.pop();
        }
        return score;
    }
};
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> score_list;
        int last_last_score = 0;
        int last_score = 0;
        int ans = 0;
        for(int i = 0 ; i < ops.size() ; i++)
        {
            if(ops[i] == "C")
            {
                score_list.pop();
            }
            else if(ops[i] == "D")
            {
                score_list.push(score_list.top()*2);
            }
            else if(ops[i] == "+")
            {
                int last = score_list.top();
                score_list.pop();
                int now_get = last + score_list.top();
                score_list.push(last);
                score_list.push(now_get);
            }
            else
            {
                score_list.push(stoi(ops[i]));
            }
        }
        for(int i = 0 ; i < score_list.size() ; )
        {
            ans += score_list.top();
            score_list.pop();
        }
        return ans;
    }
};

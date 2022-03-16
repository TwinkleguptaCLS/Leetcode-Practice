class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int itr =0;
        stack<int>s;
        
        for(int i=0;i<pushed.size();i++)
        {
            s.push(pushed[i]);
            while(!s.empty() && s.top()==popped[itr])
            {
                s.pop();
                itr++;
            }
        }
        return s.empty();
    }
};
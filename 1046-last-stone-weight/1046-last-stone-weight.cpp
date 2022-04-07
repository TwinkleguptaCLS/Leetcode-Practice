class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n<=1)
        {
            return stones[0];
        }
        while(stones.size()!=1)
        {
            sort(stones.begin(),stones.end());
            int a = stones[stones.size()-1];
            int b = stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            if(a!=b)
            {
                stones.push_back(a-b);
            }
            if(stones.size()==0)
            {
                return 0;
            }
        }
        
        return stones[0];
    }
};
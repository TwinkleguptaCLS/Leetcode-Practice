class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string i:operations)
        {
            if(i[0]=='-' || i[2]=='-')
            {
                x=x-1;
            }
            else if(i[0]== '+' || i[2]=='+')
            {
                x=x+1;
            }
            
        }
        return x;
    }
};
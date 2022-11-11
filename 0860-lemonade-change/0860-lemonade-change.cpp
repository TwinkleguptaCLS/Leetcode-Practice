class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int five=0,ten=0;
        for(int x:bills)
        {
            if(x==5)
            {
                five++;
            }
            if(x==10)
            {
                if(five<1)
                {
                    return false;
                }
                five--;
                ten++;
            }
            if(x==20)
            {
              
                if(ten && five)
                {
                    ten--;
                    five--;
                }
                else if(five>=3)
                {
                    five-=3;
                }
                else
                {
                    return false;
                }
                
                
            }
        }
        return true;
    }
};
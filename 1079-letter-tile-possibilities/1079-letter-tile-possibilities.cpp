class Solution {
public:
    int count=0;
    void countPermute(int i,string &tiles)
    {
        if(i==tiles.length())
        {
            return;
        }
        int freq[26]={0};
        for(int j=i;j<tiles.length();j++)
        {
            if(freq[tiles[j]-'A']==0)
            {
                count++;
                swap(tiles[i],tiles[j]);
                countPermute(i+1,tiles);
                swap(tiles[i],tiles[j]);
                freq[tiles[j]-'A']++;
            }
            
            
        }
    }
    int numTilePossibilities(string tiles) {
        countPermute(0,tiles);
        return count;
    }
};
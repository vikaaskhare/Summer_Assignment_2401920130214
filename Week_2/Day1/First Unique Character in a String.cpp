class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>seen(26,0);
        
        //fill map
        for(int i=0;i<s.size();i++)
        {
            
           // map_idx=(int)(s[i]-'a')
            seen[(int)(s[i]-'a')]++;
            

        }
        for(int i=0;i<s.size();i++)
        {
            if(seen[(int)(s[i]-'a')]==1)
            return i;
        }
        return -1;
    }
};

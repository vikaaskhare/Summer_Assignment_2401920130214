class Solution {
public:
    bool canConstruct(string ransom, string mag) {
        vector<int>freq(26,0);
        for(char i :mag)
        {
            freq[(int)i-'a']++;
        }
        for(char i:ransom)
        {
            if(freq[(int)i-'a']>0)
            {
                freq[(int)i-'a']--;
            }
            else
            return false;
        }
        return true;
    }
};

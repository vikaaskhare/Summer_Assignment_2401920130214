class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>count(256,0);
        int start=0,end=0;
        int n=s.size();
        int len=0;

        while(end<n)
        {
            while(count[s[end]])
            {
                count[s[start]]=0;
                start++;
            }
            count[s[end]]=1;
            len=max(len,end-start+1);
            end++;
        }
        return len;
    }
};
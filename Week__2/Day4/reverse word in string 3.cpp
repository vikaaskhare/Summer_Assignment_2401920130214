class Solution {
public:

    string reverseWords(string s) {
       int start=0,end=0;

       while(end<s.size())
       {
            if(s[end]!=' ')
            end++;
            else
            {
                reverse(s.begin()+start,s.begin()+end);
                end++;
                start=end;
            }
       }
       reverse(s.begin() + start, s.end());
       return s;
    }
};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0;
        int end=0;
        int maxsum=INT_MIN;
        int arrsum=0;
        while(end<n)
        {
            // if subarray size is <k increase size

            if(end-start<k-1)
            {
                arrsum+=nums[end];
                end++;
            }
            else
            {
                arrsum+=nums[end];
                maxsum=max(maxsum,arrsum);
                arrsum-=nums[start];
                start++;
                end++;

            }
        }
        return (double)maxsum/k;
    }
};

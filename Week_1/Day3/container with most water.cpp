class Solution {
public:
    int maxArea(vector<int>& arr) {
        int left=0,right=arr.size()-1;
        int maxans=min(arr[left],arr[right])*(right-left);
        while(right>left)
        {
            int width=right-left,height=min(arr[left],arr[right]);
            int water=height*width;
            maxans=max(maxans,water);
            
         if(min(arr[left],arr[right])==arr[left])
         left++;
         else
         right--;
        }
       return maxans;
        
            
            

        
    }
};
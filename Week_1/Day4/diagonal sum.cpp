class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,n=mat.size();
        for(int i=0;i<n;i++)
        {
            //first diagonal sum
            sum+=mat[i][i];
            sum+=mat[i][n-1-i];
        }
        if(n%2!=0)
        {
            sum-=mat[(n-1)/2][(n-1)/2];
        }return sum;
    }
};
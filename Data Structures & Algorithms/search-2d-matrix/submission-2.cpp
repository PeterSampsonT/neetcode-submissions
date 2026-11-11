class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=m*n;

        int i=0;
        
        int j=(m*n)-1;

        while(i<=j)
        {
            int mid=(i+j)/2;
            int midm=(mid/n);
            int midn=(mid%n);

            if(matrix[midm][midn]==target)
            return true;
            else if(matrix[midm][midn]<target)
            i=mid+1;
            else
            j=mid-1;
        }
        return false;
    }
};

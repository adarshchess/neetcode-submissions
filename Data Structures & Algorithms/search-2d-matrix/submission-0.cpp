class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<matrix.size();i++){

            int high=col-1;
            int low=0;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(target==matrix[i][mid]){
                    return true;
                }
                else if(target<matrix[i][mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return false;


    }
};

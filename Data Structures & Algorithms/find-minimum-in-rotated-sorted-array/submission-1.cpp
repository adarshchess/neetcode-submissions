class Solution {
public:
    int findMin(vector<int> &nums) {
      
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=0;


        while(low<=high){
            int mid=low+(high-low)/2;
         if(nums[mid]<nums[high]){
            // left part is sorted
          
            high=mid;}
            else{
                
                low=mid+1;
            }
              ans=mid;

        }
        return nums[ans];
      
    }
};

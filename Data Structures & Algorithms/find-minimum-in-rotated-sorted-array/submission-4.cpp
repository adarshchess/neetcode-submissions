class Solution {
public:
    int findMin(vector<int> &nums) {
      
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;


        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[low]<=nums[mid]){
                //left part is sorted
                ans=min(ans,nums[low]);
                low=mid+1;
            }
           else{
            ans=min(ans,nums[mid]);
            high=mid-1;
           }



// sorted part may or may not have the ans issliye everytime there is a conflict we pick the smallest element from the sorted half and continue
           

        }
        return ans;
      
    }
};

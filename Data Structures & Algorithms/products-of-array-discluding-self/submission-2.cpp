class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
                vector<int> ans(nums.size()); 
                long long prod=1;
                bool zero=false;
                int z=0;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==0){
                        z++;
                        zero=true;
                        continue;
                    }
                      prod*=nums[i];
                }

                for(int i=0;i<nums.size();i++){
                   if(nums[i]!=0&&zero||z>1){
                    ans[i]=0;
                   }
                   
                   else if(nums[i]==0){
                    ans[i]=prod;
                   }
                   else{
                    ans[i]=prod/nums[i];
                   }
                }
                return ans;

    }
};

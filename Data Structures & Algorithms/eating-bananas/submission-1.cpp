class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // binary search on answers becaause humara k would lie between 0 and tot bananas

        int high=*max_element(piles.begin(),piles.end());
       int low=1;
       
       int final=INT_MAX;

       while(low<=high){
        int ans=0;
        int k=low+(high-low)/2;
         for(int i=0;i<piles.size();i++){
            ans+=ceil((double)(piles[i])/(double)k);
         }
         if(ans>h){
            low=k+1;
         }
         else{
             final=min(k,final);
             high=k-1;
         }

       }
       return final;
    }
};

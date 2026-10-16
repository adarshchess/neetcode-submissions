class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> lst;
        for(auto it:mpp){
            pair<int,int> p={it.first,it.second};
            lst.push_back(p);

        }
        sort(lst.begin(), lst.end(), [](pair<int, int>& x, pair<int, int>& y) {
    return x.second > y.second;
});

vector<int> ans;
for(int i=0;i<k;i++){
ans.push_back(lst[i].first);
}
     return ans;
    }
    
};

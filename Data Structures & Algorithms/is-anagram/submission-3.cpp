class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        unordered_map<int,int> mpps;
        unordered_map<int,int> mppt;
        for(int i=0;i<s.size();i++){
              mpps[s[i]]++;
        mppt[t[i]]++;
        }

        if(mpps.size()!=mppt.size())
        return false;

       
        for(int i=0;i<s.size();i++){
           if(mpps[s[i]]!=mppt[s[i]]){
            return false;
           }
        }
        
        for(int i=0;i<t.size();i++){
           if(mpps[t[i]]!=mppt[t[i]]){
            return false;
           }
        }

        return true;
       
    }
};

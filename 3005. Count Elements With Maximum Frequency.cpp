class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int mx=INT_MIN;
        for(auto i:mp){
            int d=i.second;
            mx=max(mx,d);
        }
        int s=0;
        for(auto i:mp){
            if(mx==i.second){
                s=s+mx;
            }
        }
        return s;
    }
};

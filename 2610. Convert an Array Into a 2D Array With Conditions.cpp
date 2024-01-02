class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>Mat;
        
        unordered_map<int ,int>mp;

        for(auto i:nums)
        {
            mp[i]++;
        }
        int  maxi=0;
        for(auto i:mp)
        {
            maxi=max(maxi,i.second);
        }
        for(int i=0;i<maxi;i++)
        {
            vector<int>temp;
            for(auto& x:mp)

            {
                if(x.second>0)
                {
                    temp.push_back(x.first);

                    x.second--;
                }
            }
            Mat.push_back(temp);
        }
         return Mat;

    }
};

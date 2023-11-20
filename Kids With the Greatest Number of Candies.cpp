class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n=candies.size();
       // int maxi=max(candies.begin(),candies.end());
       int max=candies[0];
       for(int j=1;j<n;j++)
       {
           if(max<candies[j])
           max=candies[j];
       }

        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=max)
            result.push_back(true);
            else 
             result.push_back(false);
        }
        return result;
    }
};

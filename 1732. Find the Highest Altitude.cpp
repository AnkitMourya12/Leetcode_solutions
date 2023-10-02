class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v(gain.size()+1);
       // int n=gain.size()-1;
        v[0]=0;
        for(int i=0;i<gain.size();i++ )
        {
            v[i+1]=v[i]+gain[i];
        }
        return *max_element(v.begin(),v.end());

        //another solution
        
        // int maxi = 0;
        // int temp = 0;
        // for(int i=0; i<gain.size(); i++)
        // {
        //     temp += gain[i];
        //     maxi = max(maxi, temp);
        // }
        // return maxi;
        
    }
};

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int n=nums.size();
       
        //  int c=0;
        // for(int i=0;i<n;i++)
        // {
           
        //   for(int j=1;j<n;j++)
        //   {
        //       if(nums[i]==nums[j] && i<j)
        //       {
        //           c++;
        //       }
        //   }
        // }

        // optimize above code
       int c=0;
       unordered_map<int,int>arr;
        for(int n:nums)
        {
            c+=arr[n]++;
           // arr[n]=arr[n]+1;

        }
        return c;
        
    }
};

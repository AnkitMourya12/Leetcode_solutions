class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        // int c=0;
       
        int n=nums.size();
        if(n==0 || n==1)
        return nums;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
               ans.push_back(nums[i]);
               
            }
        //     else
        //    { ans.push_back(nums[i]);
        //         n--;
           //}
           
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
               ans.push_back(nums[i]);
               
            }
           
        }
        return ans;

    }
};

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        int n=nums.size();
       
      unordered_map<int, int>arr;
        for(int i=0;i<n;i++)
        {
           arr[nums[i]]++;
        }
        for(auto val:arr)
        {
            if(val.second%2!=0)
            {
                return false;
            }
            
        }
        
        return true;
    }
};

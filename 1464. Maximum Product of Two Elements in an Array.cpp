// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         // int max=nums[0];
//         // for(int i=0;i<nums.size();i++)
//         // {
//         //     for(int j=i+1;j<nums.size();j++)
//         //     {
//         //         if(j<nums.size()  )
//         //         { 
//         //            int maxiP= (nums[i]-1)*(nums[j]-1);
//         //            if(maxiP>max)
//         //            max=maxiP;
//         //         }
//         //     }
//         // }
//         // if(max==1)
//         // return 0;
        
//         // return max;
        
//     }
// };
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int num : nums) {
            if (num >= max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};

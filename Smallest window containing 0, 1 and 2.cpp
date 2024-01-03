#include<string>

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
         int arr[3]={0};
        int j=0,total=0,ans=INT_MAX;
        for(int i=0;i<S.length();i++){
            arr[S[i]-'0']++;
            if(arr[S[i]-'0']==1)total++;
            if(total==3){
                while(j<i and arr[S[j]-'0']>1){
                    arr[S[j]-'0']--;
                    j++;
                }
                ans = min(ans,i-j+1);
            }
        }
        return ans!=INT_MAX?ans:-1;
    }
};

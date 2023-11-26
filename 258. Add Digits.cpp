class Solution {
public:
    int addDigits(int num) {
        int s1=0,s=0;
        int n=num;
        int t;
        while(num>9)
        {
            long long tp=0;
            while(num>0)
           { tp+=num%10;
           
            
            num=num/10;
           }
           num=tp;
           
        }
        
        return num;
    }
};

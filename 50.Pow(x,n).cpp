class Solution {
public:
    double myPow(double x, int n) {
        
       // int as;
    //    if(n==0)
    //    {
    //        return 1;
    //    }
    //    double halfP= myPow(x,n/2) ;
    // double halfPseq=halfP*halfP;
    // if(n%2!=0&& n<0)
    //    {
    //         return 1/(x*halfPseq);

    //    }
    //    if(n%2!=0)
    //    {
    //         return x*halfPseq;

    //    }
    //    return halfPseq;
       
       long long p = abs(n);
        double ans = pow(x, p);
        if(n < 0) ans = 1 / ans;
        return ans;
    }
};

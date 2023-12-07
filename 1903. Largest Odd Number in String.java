class Solution {
    public String largestOddNumber(String num) {
      
       
        if((int)num.charAt(num.length()-1)%2==1)return num;
        int n=num.length()-1;
        
        while(n>=0)
        {
            int s=num.charAt(n);
                   if(s%2==1)return num.substring(0,n+1);
                   n--;

        }
        return "";
 
    }
}

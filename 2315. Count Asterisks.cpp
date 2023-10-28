class Solution {
public:
    int countAsterisks(string s) {
        int n=s.size();
        int c=0;
        int count=0;
        for(int i=0;i<n;i++){
             if(count==2) {
                count=0;
            }
            if(s[i]=='|') {
                count++;
            }
            if(count==0 && s[i]=='*') {
                c++; 
            }  
        }
        return c;   
    }
};

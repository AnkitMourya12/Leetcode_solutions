class Solution {
public:
    string convertToTitle(int c) {
        string s="";
        while(c>0)
        {
            c=c-1;
            char ch='A'+c%26;
            s=s+ch;
            c=c/26;
        }
        reverse(s.begin(),s.end());
        return s;


        
    }
};

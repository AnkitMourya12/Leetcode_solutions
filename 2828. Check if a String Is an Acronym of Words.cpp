class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n= words.size();
        int sl=s.size();
        
            int i=0;
            int c=0;
            while(i<n && c<sl)
            {
                if(words[i][0]!=s[i])
                return false;
                    c++;
                    i++;
             }
        return c==n && i==sl;      
    }
};

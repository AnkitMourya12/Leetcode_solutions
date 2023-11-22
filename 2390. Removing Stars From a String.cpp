class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        string st="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!='*')
            st.push_back(s[i]);
            else 
            st.pop_back();
        }
        return st;
        
    }
};

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string st1="";
        string st2="";
        
        for(auto w:word1)
        {
            st1=st1+w;
        }
          for(auto w:word2)
        {
            st2=st2+w;
        }
        return st1==st2;

        
    }
};

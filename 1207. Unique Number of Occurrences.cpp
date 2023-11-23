class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int>freq;
       for(auto e:arr)
       {
           freq[e]++;
       }
           unordered_set<int>s;
           for(auto e1:freq)
           {
               s.insert(e1.second);
           }
           return freq.size()==s.size();
       







        
    }
};

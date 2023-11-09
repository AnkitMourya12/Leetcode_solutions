class Solution {
public:
    string reverseVowels(string s) {
        string st=s;
        int n=s.size();
       int j=n-1;
        int i=0;
        string v="aeiouAEIOU";
        while(i<j){  
                     
    while(i<j && v.find(st[i])==string::npos){       
            i++;
        }
    while(i<j && v.find(st[j])==string::npos){
        j--;
    }
   
         swap(st[i],st[j]);
         i++;
         j--;
       
        }
        return st;
    }
};

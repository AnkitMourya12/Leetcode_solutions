class Solution {
public:
    bool winnerOfGame(string colors) {
        int c1=0;
        int c2=0;
        for(int i=1;i<colors.size();i++)
        {
            if(colors[i-1]=='A' && colors[i]=='A'&& colors[i+1]=='A')
            {
                c1++;
            }
            if(colors[i-1]=='B' && colors[i]=='B'&& colors[i+1]=='B')
            {
                c2++;
            }
        }
        return c1>c2;
    }
};

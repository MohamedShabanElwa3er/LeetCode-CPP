class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        bool ret=true;
        int last_indx=0;
        for(int i=0;i<s.size();i++)
        {
            auto it = std::find(t.begin()+last_indx,t.end(),s[i]);

            if(it==t.end())
            {
                ret=false;
                break;
            }
            else
            {
                last_indx = it-t.begin()+1;
            }
        }
        return ret;
    }
};

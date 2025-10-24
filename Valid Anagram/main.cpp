class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int size = s.size();
        bool ret=true;
        std::vector<int> count(26,0);

        if (s.size()!=t.size())
        {
            ret= false ;
        }
        else
        {
             for(auto &it : s)
             {
                 count[it-'a']++;
             }

             for(auto &it : t)
             {
                 count[it-'a']--;
             }

             for(auto &it : count)
             {
                if(it!=0)
                {
                     ret = false;
                     break;
                }
             }
        }

        return ret ;
    }
            
};

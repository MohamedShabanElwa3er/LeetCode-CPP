class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        bool ret = true ;
        std::vector<int> count(26,0);

        for(auto &it :magazine)
        {
            count[it-'a']++;
        }
        for(auto &it :ransomNote)
        {
            if(count[it-'a']==0)
            {
                ret= false;
                break;
            }
            else
            {
                count[it-'a']--;
            }
        }
        /*----------------------------------another solution------------------------------------------------*/

        // for(auto &it :ransomNote)
        // {
        //     if(std::count(ransomNote.begin(),ransomNote.end(),it)>std::count(magazine.begin(),magazine.end(),it))
        //     {
        //         ret = false ;
        //         break;
        //     }
        // }
        /*--------------------------------------------------------------------------------------------------------*/
        return ret;
    }
};

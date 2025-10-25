class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        char result=' ';
        std::vector<int> count(26,0);
        for(auto &it : t)    
        {
            count[it-'a']++;
        }
        for(auto &it : s)    
        {
            count[it-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                result = i + 'a';
                break;
            }
        }
        return result;
    }
};

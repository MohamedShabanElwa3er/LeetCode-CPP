class Solution {
public:

    int indexsum(std::string str , char target)
    {
        int cnt=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==target)
            {
                cnt+=i;
            }
        }
        return cnt;
    }
    bool isIsomorphic(string s, string t)
    {
        bool ret = true ;
        int size = s.size();
        if(s.size()==t.size())
        {
            for(int i=0;i<s.size();i++)
            {
                    if((indexsum(s,s[i]))!=(indexsum(t,t[i])))
                    {
                        ret = false;
                        break;
                    }
                    else
                    {
                        s.erase(std::remove(s.begin(),s.end(),static_cast<char>(s[i])),s.end());
                        t.erase(std::remove(t.begin(),t.end(),static_cast<char>(t[i])),t.end());
                        i=-1;
                    }
            }

        }
        return ret;

    }
};

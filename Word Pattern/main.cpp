class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        std::map<char,std::string>m;
        std::map<std::string,char>rev_m;
        std::stringstream st(s);
        std::vector<std::string> vst;
        std::string buffer="";
        bool ret=true;
        while(std::getline(st,buffer,' '))
        {
            vst.push_back(buffer);
        }
        if (pattern.size() != vst.size())
        {
            ret = false;
        }
        else
        {
            for(int i=0;i<pattern.size();i++)
            {
                char c = pattern[i];
                std::string word = vst[i];
                if( (m.find(c)==m.end()) && (rev_m.find(word)==rev_m.end()) )
                {
                  m.insert({c,word});
                  rev_m.insert({word,c});
                }
                else
                {
                  if(m[c]!=word)
                  {
                    ret=false;
                    break;
                  }
                }
            }
        }
        return ret;
    }
};

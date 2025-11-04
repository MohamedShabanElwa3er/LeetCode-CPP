class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        std::string str=s+s;
        str.erase(str.begin(),str.begin()+1);
        str.pop_back();
        return str.find(s)!=std::string::npos;
    } 
};

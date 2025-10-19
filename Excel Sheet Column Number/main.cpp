class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int ret = 0 ;
        for(auto &it : columnTitle)
        { 
            ret = ret * 26 + (it - 'A' +1); 
        }
        return ret;
    }
};

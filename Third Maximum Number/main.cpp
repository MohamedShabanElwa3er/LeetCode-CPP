class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        std::set<int> s(nums.begin(),nums.end());
        int ret=0;
        if(s.size()<3)
        {
            ret= *(s.rbegin());
        }
        else
        {
            s.erase(*s.rbegin());
            s.erase(*s.rbegin());
            ret= *(s.rbegin());
        }
        return ret;
    }
};

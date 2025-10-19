class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ret = 0;
        for(auto &it : nums)    
        {
            if(std::count(nums.begin(),nums.end(),it)==1)
            {
                ret= it ;
            }
        }
        return ret ;
    }
};

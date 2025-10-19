class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int ret=0;
        int majority_indicator = nums.size()/2;
        for(auto &it : nums)
        {
            if(std::count(nums.begin(),nums.end(),it)>majority_indicator)
            {
                ret = it;
                break;
            }
        }
        return ret ;
    }
};

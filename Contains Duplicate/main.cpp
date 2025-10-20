class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        std::unordered_set<int> seen;
        for(auto &it : nums)
        {
            if(!seen.insert(it).second)
                return true;
        }
        return false;
    }
};

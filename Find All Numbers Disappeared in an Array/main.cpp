class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int size = nums.size();
        std::unordered_set<int> seen(nums.begin(),nums.end());
        std::vector<int> result;
        for(int i=1;i<=size;i++)
        {
            if(seen.find(i)==seen.end())
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

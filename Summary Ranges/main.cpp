class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        std::vector<std::string> result;
        if (nums.empty()) return result;
        int start = nums[0];
    
        for(int i=1;i<=nums.size();i++)  
        {
            if( (i == nums.size()) || ( nums[i] != nums[i - 1] + 1 ) )
            {
                if(start==nums[i-1])
                {
                    result.push_back(std::to_string(start));
                }
                else
                {
                    result.push_back(std::to_string(start) + "->" + std::to_string(nums[i-1]));
                }
                if(i < nums.size())
                {
                    start = nums[i];
                }
            }

        }
        return result;
    }
};

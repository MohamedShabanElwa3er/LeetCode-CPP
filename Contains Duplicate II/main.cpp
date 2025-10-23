class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        std::unordered_map<int,int> last_seen;
        bool ret=false;
        for(int i=0;i<nums.size();i++)
        {
            if(last_seen.find(nums[i])!=last_seen.end())
            {
                if(i-last_seen[nums[i]]<=k)
                {
                    ret = true;
                    break;
                }
            }
            last_seen[nums[i]]=i;
        }
        return ret ;
    }
};

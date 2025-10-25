class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        std::unordered_set<int> set_1(nums1.begin(),nums1.end());
        std::unordered_set<int> result;
        for(auto &it : nums2)
        {
            if(set_1.find(it)!=set_1.end())
            {
                result.insert(it);
            }
        }
        return std::vector<int>(result.begin(),result.end());

        /* ------------------ another solution ----------------------- */
        
        // std::vector<int> result;
        // std::sort(nums1.begin(),nums1.end());
        // std::sort(nums2.begin(),nums2.end());
        // nums1.erase(std::unique(nums1.begin(),nums1.end()),nums1.end());
        // nums2.erase(std::unique(nums2.begin(),nums2.end()),nums2.end());
        // for(auto &it : nums1)
        // {
        //     if(std::find(nums2.begin(),nums2.end(),it)!=nums2.end())
        //     {
        //         result.push_back(it);
        //     }
        // }
        // return result;

        /* ---------------------------------------------------------------- */
    }
};

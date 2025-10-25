class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        std::vector<int> result;
        for(auto &it : nums1)
        {

            int cnt = std::min(std::count(nums1.begin(),nums1.end(),it),
                               std::count(nums2.begin(),nums2.end(),it));
            if(std::count(result.begin(),result.end(),it)==0)
            {
                result.insert(result.end(),cnt,it);
            }
        }
        return result;
    }
};

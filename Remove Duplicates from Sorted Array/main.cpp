class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       std::set<int> seen(nums.begin(),nums.end());
       nums=std::vector<int>(seen.begin(),seen.end());
        return nums.size();
    
    }
};

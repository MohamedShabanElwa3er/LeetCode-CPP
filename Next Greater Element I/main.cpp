class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        std::unordered_map<int,int> nextgreater;
        std::stack<int> st;
        std::vector<int> result;
        for(auto &it : nums2)
        {
            while((!st.empty()) && (it>st.top()))
            {
                nextgreater[st.top()] = it ;
                st.pop();
            }
                st.push(it);
        }
        while(!st.empty())
        {
            nextgreater[st.top()] = -1 ;
            st.pop();
        }

        for(auto &it : nums1)
        {
            result.push_back(nextgreater[it]);
        }
        return result;
    }
};

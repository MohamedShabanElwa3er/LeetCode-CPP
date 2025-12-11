class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int current=0;    
        int old=0;    
        for(auto &it :nums)
        {
           old= std::max(old,current=((it==1)?current+1 : 0));
            /** Different solution  */
            // if(it==1)
            // {
            //     current++;
            //     if(current>old)
            //     {
            //         old=current;
            //     }
            // }
            // else
            // {
            //     current=0;
            // }
        }
        return old;
    }
};

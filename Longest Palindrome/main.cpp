class Solution {
public:
    int longestPalindrome(string s) 
    {

        int count = 0;
        bool oddchar=false;
        std::vector<int>counter(52,0);
        for(auto &it : s)
        {
            if(it>='a' && it<='z')
            {
                counter[it-'a']++;  
            }
            else if(it>='A' && it<='Z')
            {
                counter[it-'A'+26]++;
            }
            else
            {
                /*DoNothing*/
            }
        }

        for(int i=0;i<52;i++)
        {
            auto paired_char = counter[i];
            if(paired_char%2==0)
            {
                count+=paired_char;
            }
            else
            {
                count+=paired_char-1;
                oddchar=true;
            }
        }

        if(oddchar==true) count+=1;
        return count;




        /*------------------------- another solution --------------------- */

        // int count=0;
        // bool oddchar=false;
        // std::unordered_map<char,int> m;

        // for(auto it : s)
        // {
        //     m[it]++;
        // }
         
        // for(auto &it : m)
        // {
        //     auto paired_char = it.second;
        //     if( paired_char %2 == 0)
        //     {
        //         count+=paired_char;
        //     }
        //     else
        //     {
        //         count += paired_char-1;
        //         oddchar=true;
        //     }
        // }
        // if(oddchar==true) count+=1;
        // return count;
        /*--------------------------------------------------------------------*/
    }
};

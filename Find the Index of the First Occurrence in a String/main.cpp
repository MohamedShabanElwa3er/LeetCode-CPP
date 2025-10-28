
class Solution {
public:
    int strStr(string haystack, string needle)
    {
        
        return haystack.find(needle);
    }
};

    /*------------------------------------------------------------*/

// bool search(string haystack, string needle,int positions)
// {
//     std::string str;
//     std::copy_n(haystack.begin()+positions,needle.size(),std::back_inserter(str));
//     if(str == needle)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }


// class Solution {
// public:
//     int strStr(string haystack, string needle)
//     {
//         int needle_size = needle.size();
//         for(int i= 0 ; i<haystack.size();i++)
//         {
//             if((needle[0] == haystack[i] ) && ((i+needle_size)<=haystack.size()))
//             {
//                 if(search(haystack,needle,i)==true)
//                 {
//                     return i;
//                 }
//             }
//         }
//         return -1;
        
//     }
// };

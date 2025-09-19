class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = to_string(x);
        std::string reversedstr = to_string(x);
        std::reverse(reversedstr.begin(),reversedstr.end());
        if(x < 0)
        {
            return false ;
        }
        else
        {
            return (str == reversedstr);
        }
    }
};

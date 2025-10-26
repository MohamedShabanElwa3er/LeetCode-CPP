class Solution {
public:
    string toHex(int num) 
    {
        if(num==0) return "0";
        uint32_t number = static_cast<uint32_t>(num);
        std::string hexvalues = "0123456789abcdef";
        std::string result="";
        while(number!=0)
        {
            int lsb_4_bits = number&0x000f;
            result+=hexvalues[lsb_4_bits];
            number = number>>4; 
        }
        std::reverse(result.begin(),result.end());
        /*-----------------anohter solution------------------------*/
        // std::stringstream ss;
        // ss << std::hex <<(unsigned int)num;
        // return ss.str();
        /*----------------------------------------------------------*/
        return result;
    }
};

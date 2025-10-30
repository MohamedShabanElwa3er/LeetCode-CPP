class Solution {
public:
    string addStrings(string num1, string num2) 
    {

        int sum=0;
        int carry=0;
        int s_1 = num1.size()-1;
        int s_2 = num2.size()-1;
        std::string result="";
        while(s_1>=0 || s_2>=0 || carry>0)
        {
            int fn = s_1>=0 ? num1[s_1--]-'0' : 0;
            int sn = s_2>=0 ? num2[s_2--]-'0' : 0;
            sum = (fn+sn+carry) %10;
            carry = (fn+sn+carry) /10;

            result+=std::to_string(sum);
        }
        std::reverse(result.begin(),result.end());
        return result;
        
        /*------------------ solution but not for big numbers -----------*/
        // uint64_t n1= std::stoul(num1,nullptr,10);
        // uint64_t n2= std::stoul(num2,nullptr,10);
        // uint64_t sum=n1+n2;
        // return std::string(std::to_string(sum));
    }
};

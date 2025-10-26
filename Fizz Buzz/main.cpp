class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {

        std::vector<std::string> result;
        std::string str="";
        for(int i=1;i<=n;i++)    
        {
            str="";
            if(i%3==0) str+="Fizz";
            if(i%5==0) str+="Buzz";
            result.push_back(str.empty() ? std::to_string(i) : str);
        }
        return result;
    }
};

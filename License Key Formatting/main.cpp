class Solution {
public:
    string licenseKeyFormatting(string s, int k) 
    {
        int number_of_added_dashes = 0 ;
        int size_of_the_string_with_dashes =0;
        int counter=0;
        int read = 0;
        int write= 0;
        s.erase(std::remove(s.begin(),s.end(),'-'),s.end());
        std::string result="";
        int size_without_dashes = s.size();
        
        if(size_without_dashes==0)
        {
            result= "";
        }
        else
        {
            number_of_added_dashes = std::ceil((float)size_without_dashes / k ) -1;

            size_of_the_string_with_dashes = number_of_added_dashes + size_without_dashes ;

            std::string string_with_dashes(size_of_the_string_with_dashes,' ');

            std::transform(s.begin(),s.end(),s.begin(),[](char c){return std::toupper(c);});
            read = s.size()-1;
            write= size_of_the_string_with_dashes-1;
            while(read>=0)
            {
                string_with_dashes[write--]=s[read--];
                counter++;
                if((counter==k)&&( read >= 0))
                {
                    string_with_dashes[write--]='-';
                    counter=0;
                }

            }
            result= string_with_dashes;
        }
        
    return result ;
    }
};

class Solution {
public:
    bool isupper(string word)
    {
        for(char c : word)
        {
            if(!std::isupper(c))
            {
                return false ;
            }
        }
        return true ;
    }
    bool islower(string word)
    {
        for(char c : word)
        {
            if(!std::islower(c))
            {
                return false ;
            }
        }
        return true ;
    }
    bool detectCapitalUse(string word) 
    {
        int uppercount=0;

        for(auto &it : word)
        {
            if(std::isupper(it))
            {
                uppercount++;
            }
        }

        return ((uppercount==word.size()) || (uppercount==0) || (uppercount==1 && std::isupper(word[0])) );
        
        /*Different Solution*/

        //  if(isupper(word)||islower(word))
        //  {
        //     return true ;
        //  }
        //  else if(std::isupper(word[0]))
        //  {
        //     return islower(word.substr(1));
        //  }
        //  else
        //  {
        //     return false;
        //  }
         
    }
};

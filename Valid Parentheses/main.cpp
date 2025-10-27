class Solution {
public:
    bool isValid(string s) {
 
        std::stack<char> stac;
        std::map<char,char> m
        {   
            {')','('},
            {']','['},
            {'}','{'}
        };

        for(auto &it : s)
        {
            if(m.count(it))
            {
                if(stac.empty()||stac.top()!=m[it])
                {
                    return false;
                }
                else
                {
                    stac.pop();
                }

            }
            else
            {
                stac.push(it);
            }
        }
        return stac.empty();


 /*-------------------------- another solution -------------------------------*/
        // int i=1;
 
        // if( (s.empty()) || (s.size() % 2 != 0) )
        // {
        //     return false ;
        // }
        // else
        // {
        //     while (s.size() > 0)
        //     {
        //         if (((s[i] == ')') && (s[i - 1] == '(')) || (s[i] == '}' && (s[i - 1] == '{')) || (s[i] == ']' && (s[i - 1] == '[')))
        //         {
        //             s.erase(i - 1, 2);
        //             if(i>1)
        //             i--;
        //         }
        //         else
        //         {
        //             if(i>=s.size())
        //             {
        //                 return false;
        //             }
        //             i++;
        //         }
        //     }
                 
            // }
            
        //     return true ;
 /*---------------------------------------------------------------------------*/
    }
};

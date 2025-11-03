class Solution {
public:
    int countSegments(string s) 
    {
        int i=0;
        bool start=false;
        int cnt=0;

        for(auto c : s)
        {
            if( c != ' ' && start==false)
            {
                cnt++;
                start=true;
            }
            else if( c == ' ' && start==true)
            {
                start=false;
            }
            else
            {
                /*DoNothing*/
            }
        }
        return cnt;
        
    }
};

class Solution {
public:
    string reverseVowels(string s) 
    {
        std::vector<int>positions;
        int left=0;
        int right=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||
               s[i]=='U')
            {
                positions.push_back(i);
            }
        }
        right=positions.size()-1;
        while(left<right)
        {
            std::swap(s[positions[left]],s[positions[right]]);
            left++;
            right--;
        }
        return s;
    }
};

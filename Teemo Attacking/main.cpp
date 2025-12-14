class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        int number_of_seconds=0;
        int gap=0;

        for(int i=0;i<timeSeries.size()-1;i++)
        {   
            gap = timeSeries[i+1]-timeSeries[i];
            number_of_seconds+=std::min(gap,duration);
        }
        number_of_seconds+=duration;
    return number_of_seconds;
    }
};

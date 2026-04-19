class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        std::vector<std::string> result ;
        std::vector<int> winners_order(score);
        std::sort(winners_order.begin(),winners_order.end(),std::greater<int>());
        std::unordered_map<int,int> mm;
        for(int i=0;i<score.size();i++)
        {
            mm[winners_order[i]] = i;
        }

        for(int i=0;i<score.size();i++)
        {
            int rank = mm[score[i]] ;
            if(rank == 0 ) result.push_back("Gold Medal");
            else if(rank == 1 ) result.push_back("Silver Medal");
            else if(rank == 2 ) result.push_back("Bronze Medal");
            else 
            {
                result.push_back(std::to_string(rank+1));
            }
        }
        return result ;
        /*Different Solution*/

        // std::vector<std::string> result ;
        // std::vector<int> winners_order(score);
        // std::sort(winners_order.begin(),winners_order.end(),std::greater<int>());
        // for(int i=0;i<score.size();i++)
        // {
        //     switch((std::find(winners_order.begin(),winners_order.end(),score[i])-winners_order.begin()))
        //     {
        //         case 0 :  result.push_back("Gold Medal");    break ;
        //         case 1 :  result.push_back("Silver Medal");  break ;
        //         case 2 :  result.push_back("Bronze Medal"); break ;
        //         default :  result.push_back(std::to_string(((std::find(winners_order.begin(),winners_order.end(),score[i])-winners_order.begin())) + 1));
        //     }

        // }
        // return result ;
        
    }
};

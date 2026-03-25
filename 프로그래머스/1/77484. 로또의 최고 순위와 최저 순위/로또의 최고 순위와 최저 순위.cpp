#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> rank = {6,6,5,4,3,2,1};    
    unordered_set<int> winMap(win_nums.begin(), win_nums.end());
    int blind = 0;
    int hit = 0;
    
    for(int i = 0 ; i < lottos.size() ; ++i)
    {
        if(lottos[i] == 0 )
        {
            blind++;
        }
        else if(winMap.count(lottos[i]))
        {
            hit++;
        }
    }

    answer.push_back(rank[hit+blind]);
    answer.push_back(rank[hit]);
    
    return answer;
}
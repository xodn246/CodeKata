#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end());
    
    while(score.size() >= m)
    {
        int minScore = k;
        for(int i = 0 ; i < m ; ++i)
        {
            if(score[score.size() - 1] < k) 
            {
                minScore = score[score.size() - 1];
            }
            score.pop_back();
        }
        answer += minScore*m;
    }
    
    return answer;
}
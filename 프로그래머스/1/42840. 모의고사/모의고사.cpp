#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> listA = {1, 2, 3, 4, 5};
    vector<int> listB = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> listC = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int scoreA = 0;
    int scoreB = 0;
    int scoreC = 0;
    
    for (int i = 0; i < answers.size() ; ++i)
    {
        if(answers[i] == listA[i % listA.size()]) scoreA++;
        if(answers[i] == listB[i % listB.size()]) scoreB++;
        if(answers[i] == listC[i % listC.size()]) scoreC++;
    }
    
    int maxScore = max({scoreA, scoreB, scoreC});
    
    if(maxScore == scoreA) answer.push_back(1);
    if(maxScore == scoreB) answer.push_back(2);
    if(maxScore == scoreC) answer.push_back(3);
    
    return answer;
}
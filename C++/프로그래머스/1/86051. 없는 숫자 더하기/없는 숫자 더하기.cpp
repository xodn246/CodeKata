#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<bool> numCheck(10, false);
    
    for(int i : numbers)
    {
        numCheck[i] = true;
    }
    
    for(int i = 0 ; i < numCheck.size(); ++i)
    {
        if(!numCheck[i]) answer += i;
    }
    
    return answer;
}
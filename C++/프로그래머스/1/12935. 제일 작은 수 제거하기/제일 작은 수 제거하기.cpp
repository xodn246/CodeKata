#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    auto min = min_element(answer.begin(), answer.end());
    answer.erase(remove(answer.begin(), answer.end(), *min), answer.end());
    
    if(answer.size() == 0) answer.push_back(-1);
    
    return answer;
}
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> result;
    
    while(n != 0)
    {
        result.push_back(n % 3);
        n /= 3;
    }
    
    for (int i = result.size() - 1 ; i >= 0 ; --i)
    {
        answer += pow(3,result.size() - i - 1) * result[i];
    }
    
    return answer;
}

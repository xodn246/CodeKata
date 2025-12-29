#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float div = 0;
    div = ((float)num1 / (float)num2) * 1000;
    answer = div;
    
    return answer;
}

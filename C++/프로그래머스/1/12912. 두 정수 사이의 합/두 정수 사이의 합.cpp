#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long numCount;
    
    numCount = llabs(b - a) + 1;
    
    answer = (a + b) * numCount / 2;
    return answer;
}
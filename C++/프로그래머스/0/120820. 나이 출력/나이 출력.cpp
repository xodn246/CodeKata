#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    int currentYear = 2022;
    
    answer = currentYear - age + 1;
    return answer;
}
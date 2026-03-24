#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1 ; i <= number ; ++i)
    {
        int maxPower = 0;
        for(int j = 1; j <= sqrt(i) ; ++j)
        {
            if(i % j == 0)
            {
                if(j*j == i) maxPower++;
                else maxPower += 2;
            }
        }

        if (maxPower > limit) answer += power;
        else answer += maxPower;
    }
    
    return answer;
}
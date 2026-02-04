#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int SIZE = right - left + 1;
    
    for (int i = left ; i <= right ; ++i)
    {
        int count = 0;
        if (i == 1) count = 1;
        else
        {
            for (int j = 1 ; j <= sqrt(i) ; ++j)
            {
                if (i % j == 0)
                    if (j == sqrt(i)) count++;
                    else count+=2;
            }
        }
        
        if(count % 2 == 0) answer += i;
        else answer -= i;
    }
    
    return answer;
}
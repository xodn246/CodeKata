#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int remain = 0;
    
    while(1)
    {      
        if(n / a == 0) break;
        
        int changed = (n/a) * b;
        
        answer += changed;
        
        if (n % a != 0) 
        {
            remain += n%a;
        }
        
        n = changed + remain;
        remain = 0;
    }   
    
    return answer;
}
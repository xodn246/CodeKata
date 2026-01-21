#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;
    long long lNum = num;
    
    // 3항 연산자로 정리 가능
    while(lNum > 1){
        if(count == 500) return -1;
        
        lNum % 2 == 0 ? lNum /= 2 : lNum = lNum * 3 + 1;
        
        /*
        if(lNum % 2 == 0)
        {
            lNum /= 2;
        }
        else
        {
            lNum = lNum * 3 + 1;
        }
        */
        ++count;
    }
    
    return count;
}
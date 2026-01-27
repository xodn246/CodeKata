#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    int Size = phone_number.size();
    
    for(int i = 0 ; i < Size; ++i)
    {
        if(Size - i <= 4) break;
        else answer[i] = '*';
    }
    
    return answer;
}
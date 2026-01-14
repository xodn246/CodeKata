#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
     // stoi, atoi >> 부호처리 안해줘도 됨... 알아서 자동처리 함...
    /*if(s[0] == '-')
    {
        string sub = s.substr(1,s.size());
        answer -= stoi(sub);
    }
    else if(s[0] == '+') 
    {
        string sub = s.substr(1,s.size());
        answer = stoi(sub);
    }
    else
    {
        answer = stoi(s);    
    }
    */
    answer = stoi(s);
    return answer;
}
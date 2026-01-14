#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    if(s[0] == '-')
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
    return answer;
}
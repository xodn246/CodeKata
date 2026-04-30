#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int countX[10] = {};
    int countY[10] = {};
    
    for(int c : X) countX[c - '0']++;
    for(int c : Y) countY[c - '0']++;
    
    for (int i = 9; i >= 0; i--) 
    {
        int common = min(countX[i], countY[i]);
        
        for (int j = 0; j < common; j++) 
        {
            answer += to_string(i);
        }
    }
    
    if(answer.size() == 0) return "-1";
    if(answer[0] == '0') return "0";
    return answer;
}
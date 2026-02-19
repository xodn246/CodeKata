#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int wordCount = 0;
    
    for(int i = 0 ; i < s.size() ; ++i)
    {
        if(wordCount % 2 == 0) 
        {
            answer += toupper(s[i]);
        }
        else 
        {
            answer += tolower(s[i]);
        }
               
        wordCount++;
        if(s[i] == ' ') wordCount = 0;
    }
    
    return answer;
}
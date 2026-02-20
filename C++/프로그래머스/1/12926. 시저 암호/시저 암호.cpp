#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    n %= 26;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'Z') 
        {
            c = (c - 'A' + n) % 26 + 'A';
        } 
        
        else if (c >= 'a' && c <= 'z') 
        {
            c = (c - 'a' + n) % 26 + 'a';
        }
        
        answer += c;
    }
    
    return answer;
}
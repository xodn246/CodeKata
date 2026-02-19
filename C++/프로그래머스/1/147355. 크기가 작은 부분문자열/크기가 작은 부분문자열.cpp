#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;

    for(int i = 0 ; i < t.size() - p.size() + 1 ;  ++i)
    {
        string subT = t.substr(i, p.size());
        if(stoll(subT) <= stoll(p)) answer++;
    }
    
    return answer;
}

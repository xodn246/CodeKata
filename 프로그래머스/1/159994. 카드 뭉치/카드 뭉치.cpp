#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int index1 = 0;
    int index2 = 0;
    
    for(int i = 0 ; i < goal.size(); ++i)
    {
        if(index1 < cards1.size())
        {
            if(cards1[index1] == goal[i])
            {
                index1++;
                continue;
            }
        }
        
        if(index2 < cards2.size())
        {
            if(cards2[index2] == goal[i])
            {
                index2++;
                continue;
            }
        }
        return "No";
    }
    return "Yes";
}
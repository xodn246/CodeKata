#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> student(n,1);
    for(int i : lost)
    {
        student[i - 1] -= 1;
    }
    for(int i : reserve)
    {
        student[i - 1] += 1;
    }
    
    for(int i = 0 ; i < n ; ++i)
    {
        if(student[i] == 0)
        {
            if((i-1) >= 0 && student[i-1] == 2)
            {
                student[i]++;
                student[i-1]--;
                continue;
            }
            
            if((i+1) < n && student[i+1] == 2)
            {
                student[i]++;
                student[i+1]--;
                continue;
            }
        }
    }
    
    for(int i : student)
    {
        cout << i << " ";
        if(i > 0) answer++;
    }
    
    return answer;
}
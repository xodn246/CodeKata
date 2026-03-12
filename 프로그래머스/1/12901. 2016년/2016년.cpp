#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) 
{
    int totalDay = 0;
    
    if(a > 1)
    {
        for(int i = 1 ; i < a ; ++i)
        {
            if(i <= 7)
            {
                if(i == 2) totalDay += 29;
                else if(i % 2 == 1) totalDay += 31;
                else totalDay += 30;
            }
            else
            {
                if(i % 2 == 1) totalDay += 30;
                else totalDay += 31;
            }
        }
    }
    totalDay += b;
    cout << totalDay;
    
    switch(totalDay % 7)
    {
        case 0:
            return "THU";
            break;
            
        case 1:
            return "FRI";
            break;
            
        case 2:
            return "SAT";
            break;
            
        case 3:
            return "SUN";
            break;
            
        case 4:
            return "MON";
            break;
            
        case 5:
            return "TUE";
            break;
            
        case 6:
            return "WED";
            break;
    }
}
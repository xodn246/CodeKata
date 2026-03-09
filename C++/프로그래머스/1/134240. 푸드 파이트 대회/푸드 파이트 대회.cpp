#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
   /* 
    for(int i = 1 ; i < food.size(); ++i)
    {
        if(food[i] % 2 == 1) food[i] -= 1;
        
        for(int j = 0 ; j < food[i] / 2 ; ++j)
        {
            answer += to_string(i);
        }
    }
    
    answer += '0';
    
    for(int i = food.size() - 1 ; i > 0 ; --i)
    {
         for(int j = 0 ; j < food[i] / 2 ; ++j)
        {
            answer += to_string(i);
        }
    }
    */
    
    //reverse 이용한 풀이도 가능
    
    string half = "";
    for(int i = 1 ; i < food.size(); ++i)
    {
        if(food[i] % 2 == 1) food[i] -= 1;
        
        for(int j = 0 ; j < food[i] / 2 ; ++j)
        {
            half += to_string(i);
        }
    }
    
    string re_half = half;
    reverse(re_half.begin(), re_half.end());
    
    answer = half + "0" + re_half;
    
        
    return answer;
}
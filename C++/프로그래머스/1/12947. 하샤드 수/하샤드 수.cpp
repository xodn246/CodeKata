#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int i = x;
    while(i > 0){
        sum += i%10;
        i /= 10;
    }
    cout << sum;
    return (x % sum == 0) ? true : false;
}
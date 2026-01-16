#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sortBig(char a, char b){
    return a >= b ? true : false;
}

long long solution(long long n) {
    long long answer = 0;
    string num = to_string(n);
    sort(num.begin(), num.end(),sortBig); // 직접 함수 구현해서 해줄필요없음 greater<char> 쓰면 문자를 내림차순으로 정렬 가능
    answer = stoll(num);
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int idx;

bool compare(const string& a, const string& b) {
    if (a[idx] != b[idx]) {
        return a[idx] < b[idx];
    }
    return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    string tempstr;
    idx = n;
    
    sort(strings.begin(), strings.end(), compare);

    return strings;
}
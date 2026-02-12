#include <string>
#include <vector>

using namespace std;

vector<int> GCDnLCM(int a, int b)
{
    vector<int> result;
    int divnum = 2;
    int GCD = 1;
    int LCM = 1;
    while(true)
    {
        if (a < divnum || b < divnum) break;
        
        if(a % divnum == 0 && b % divnum == 0)
        {
            GCD *= divnum;
            LCM *= divnum;
            
            a /= divnum;
            b /= divnum;
        }
        else
        {
            divnum++;
        }
    }
    
    GCD = GCD * a * b;
    
    result.push_back(LCM);
    result.push_back(GCD);
    
    return result;
}

vector<int> solution(int n, int m) {
    return (n < m) ? GCDnLCM(n,m) : GCDnLCM(m,n); 
}
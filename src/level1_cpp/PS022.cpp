#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    if(a==b)return a;
    long long answer = 0;
    long long t = abs(b - a) + 1;
    answer += (t * (t + 1)) / 2;
    a < b ? (answer += t*(a-1)) : (answer += t*(b-1));
    return answer;
}
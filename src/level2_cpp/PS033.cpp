#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++) {
        answer += i;
        int t = floor(sqrt(i));
        if (t * t == i) { answer -= 2 * i; }
    }
    return answer;
}
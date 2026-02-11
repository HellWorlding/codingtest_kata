#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int a[10]={0,};
    string s = to_string(n);
    for (int i = 0; i<s.length(); i++) {
        a[s[i] - '0']++;
    }
    int z = 0;
    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < a[i]; j++) {
            answer += i * pow(10, z++);
        }
    }
    return answer;
}
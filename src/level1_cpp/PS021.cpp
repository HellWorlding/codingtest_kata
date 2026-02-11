#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int k = 0;
    string s = to_string(x);
    for (int i = 0; i < s.length(); i++) {
        k += s[i] - '0';
    }
    return x % k == 0;
}
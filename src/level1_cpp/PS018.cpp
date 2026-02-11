#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    if (s[0] == '-') {
        return -1*stoi(s.substr(1));
    }
    else {
        return stoi(s);
    }
}
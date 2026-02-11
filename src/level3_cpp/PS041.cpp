#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int k = 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ') { k = 1; continue; }
        if (s[i] < 'a') { s[i] += ('a' - 'A'); }
        k++ & 1 ? s[i] -= ('a' - 'A') : 1;
    }
    return s;
}
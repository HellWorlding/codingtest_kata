#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int month[12] = { 0,31,29,31,30,31,30,31,31,30,31,30 };
    int tot = 0;
    string days[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
    for (int i = 0; i < a; i++) {
        tot += month[i];
    }
    tot += b+4;
    tot %= 7;
    answer = days[tot];
    return answer;
}
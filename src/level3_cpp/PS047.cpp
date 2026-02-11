#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    int t = strings.size();
    for (int i = 0; i < t; i++) {
        int min = 0;
        for (int j = 0; j < strings.size(); j++) {
            if (strings[j][n] < strings[min][n]) {
                min = j;
            }
            if (strings[j][n] == strings[min][n]&&(strings[j].compare(strings[min])<0)) {
                min = j;
            }
        }
        answer.push_back(strings[min]);
        strings[min] = strings[strings.size()-1];
        strings.pop_back();
    }
    //strcmpi
    return answer;
}
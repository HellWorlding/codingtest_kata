#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    bool a[201]={0,};
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i+1; j < numbers.size(); j++) {
            a[numbers[i] + numbers[j]] = 1;
        }
    }
    for (int i = 0; i < 201; i++) {
        if (a[i] == 1) {
            answer.push_back(i);
        }
    }
    return answer;
}
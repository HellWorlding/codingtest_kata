#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        int* a;
        a = new int[3 + commands[i][1] - commands[i][0]];
        int t = 0;
        for (int j = commands[i][0]-1; j <= commands[i][1]; j++) {
            a[t++] = array[j];
        }
        sort(a,a+t-1);
        answer.push_back(a[commands[i][2]-1]);
        delete[] a;
    }
    return answer;
}
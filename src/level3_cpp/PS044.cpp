#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    for (int i = 0; i < sizes.size(); i++) {
        int temp = 0;
        if (sizes[i][0] < sizes[i][1]) {
            temp = sizes[i][1];
            sizes[i][1] = sizes[i][0];
            sizes[i][0] = temp;
        }
    }
    int w = sizes[0][0], h = sizes[0][1];
    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] > w) {
            w = sizes[i][0];
        }
        if (sizes[i][1] > h) {
            h = sizes[i][1];
        }
    }
    return w*h;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() <= 1) { arr[0]=-1; return arr; }
    int a = arr[0];
    int ind = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < a) {
            ind = i;
            a = arr[i];
        }
    }
    arr.erase(arr.begin() + ind);
    return arr;
}
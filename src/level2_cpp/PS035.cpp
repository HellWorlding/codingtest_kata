using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long total = (long long)price * (long long)count * (long long)(count + 1) / 2;
    (total - money) > 0 ? answer = total - money : answer=0;
    return answer;
}
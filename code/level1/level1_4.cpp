//탐욕법(Greedy)
//체육복

#include <string.h>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int a_lost[31];
    int a_reserve[31];
    
    memset(a_lost, 0, sizeof(a_lost));
    memset(a_reserve, 0, sizeof(a_reserve));
    int size = lost.size();
    for (int i = 0;i < size; i++)
        a_lost[lost[i]] = 1;
    size = reserve.size();
    for (int i = 0; i < size; i++)
        a_reserve[reserve[i]] = 1;
    
    for (int i = 1;i <= n; i++)
    {
        if (a_lost[i] == 1 && a_reserve[i] == 1)
        {
            a_lost[i] = 0;
            a_reserve[i] = 0;
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (a_lost[i] == 1)
        {
            if (i - 1 > 0 && a_reserve[i - 1] == 1)
            {
                a_lost[i] = 0;
                a_reserve[i - 1] = 0;
            }
            else if (a_reserve[i + 1] == 1)
            {
                a_lost[i] = 0;
                a_reserve[i + 1] = 0;
            }
        }
    }
    
    for (int i = 1;i <= n; i++)
    {
        if (a_lost[i] == 0)
            answer++;
    }
    return answer;
}
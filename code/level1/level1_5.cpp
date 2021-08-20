//연습문제
//문자열 내 p와 y의 개수

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    
    for (int i = 0; s[i]; i++)
    {
        char ch = tolower(s[i]);
        if (ch == 'p') p++;
        if (ch == 'y') y++;
    }
    
    if (p != y) answer = false;

    return answer;
}
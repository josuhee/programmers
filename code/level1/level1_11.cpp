// 숫자 짝꿍

#include <string>
#include <vector>

using namespace std;

int num[2][10];
string solution(string X, string Y) {
    string answer = "";
    
    for (char n: X)
        num[0][n-'0']++;
    
    for (char n: Y)
        num[1][n-'0']++;
    
    bool flag = true;
    for (int i = 9; i >= 0; i--) {
        if (min(num[0][i],num[1][i]) > 0) {
            if (i > 0) flag = false;
            for (int j = 0; j < min(num[0][i], num[1][i]); j++)
                answer += (i + '0');
        }
    }
    if (answer.size() == 0) answer="-1";
    else if (flag) answer="0";
    return answer;
}

//월간 코드 챌린지 시즌2
//2개 이하로 다른 비트

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    int size = numbers.size();
    
    for (int tc = 0; tc < size; tc++)
    {
        if (numbers[tc] % 2 == 0)
            answer.push_back(numbers[tc] + 1);
        else
            answer.push_back(numbers[tc] + ((numbers[tc] ^ (numbers[tc] + 1)) + 1) / 4);
    }
    return answer;
}

/*
처음으로 0이 나오기 전의 비트를 구하는 방법.
num + ((num ^ (num + 1)) + 1) / 4
*/
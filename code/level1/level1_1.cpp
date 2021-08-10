//2020 카카오 인턴십
//키패드 누르기

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int size, x, y;
    pair<int, int> left;
    pair<int, int> right;
    size = numbers.size();
    left = {3, 0};
    right = {3, 2};
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == 0)
        {
            x = 3;
            y = 1;
        }
        else
        {
            x = (numbers[i] - 1) / 3;
            y = (numbers[i] - 1) % 3;
        }
        if (numbers[i] % 3 == 1)
        {
            answer += "L";
            left = {x, y};
        }
        else if (numbers[i] % 3 == 0 && numbers[i] != 0)
        {
            answer += "R";
            right = {x, y};
        }
        else
        {
            int tmp1 = abs(x - right.first) + abs(y - right.second);
            int tmp2 = abs(x - left.first) + abs(y - left.second);
            if (tmp1 < tmp2)
            {
                answer += "R";
                right = {x, y};
            }
            else if (tmp1 > tmp2)
            {
                answer += "L";
                left = {x, y};
            }
            else
            {
                if (!hand.compare("right"))
                {
                    answer += "R";
                    right = {x, y};
                }
                else
                {
                    answer += "L";
                    left = {x, y};
                }
            }
        }
    }
    return answer;
}
//정렬
//가장 큰 수

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int x, int y)
{
    string x_str = to_string(x);
    string y_str = to_string(y);
    
    int n = stoi(x_str + y_str);
    int m = stoi(y_str + x_str);
    
    if (n > m)
        return true;
    else return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    int size = numbers.size();
    
    sort(numbers.begin(), numbers.end(), compare);
    for (int i = 0; i < size; i++)
        answer += to_string(numbers[i]);
    if (answer[0] == '0')
        answer = "0";
    return answer;
}
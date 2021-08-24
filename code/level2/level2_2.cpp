//해시
//전화번호 목록

#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    
    int size = phone_book.size();
    for (int i = 0; i < size - 1; i++)
    {
        if (!strncmp(phone_book[i].c_str(), phone_book[i + 1].c_str(), phone_book[i].size()))
        {
            answer = false;
            break ;
        }
    }
    return answer;
}